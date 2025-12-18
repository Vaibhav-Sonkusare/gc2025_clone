# RV32 RISC-V Toolchain & BSP Build Guide

>
> - GNU Toolchain (Bare‑metal + Linux)
> - U‑Boot (v2025.07)
> - OpenSBI (v1.7)
> - Linux Kernel (v6.16)
> - Buildroot root filesystem
>


---

## 1. Design Philosophy

- **RV32 only** – no RV64, no multilib
- **One toolchain per ABI** – no mixing soft/hard float

---

## 2. Supported Host Systems

| OS | Status |
|----|-------|
| Ubuntu 22.04 | ✅ Supported |
| Ubuntu 24.04 | ✅ Supported |

> Other distributions may work but are not validated.

---

## 3. RV32 Architecture Primer

### 3.1 Base Architecture

- **XLEN:** 32‑bit
- **Registers:** 32 × 32‑bit
- **Address Space:** 4 GB

### 3.2 Extensions Used

| Extension | Meaning |
|---------|--------|
| I | Base integer |
| M | Multiply / divide |
| A | Atomics |
| C | Compressed instructions |
| F | Single‑precision FPU |
| D | Double‑precision FPU |
| G | IMAFD (standard Linux baseline) |

---

## 4. ABI Selection (Critical)

| ABI | Description | Usage |
|----|------------|------|
| ilp32 | Soft‑float | Bare‑metal MCU |
| ilp32f | Single‑precision FPU | Bare‑metal |


---

## 5. Recommended CPU Profiles

| Target | -march | -mabi |
|------|-------|------|
| MCU (no FPU) | rv32imac | ilp32 |
| MCU (SP FPU) | rv32imafc | ilp32f |
| MCU (DP FPU) | rv32imafdc | ilp32d |
| Linux | rv32gc | ilp32d |

---

## 6. Directory Layout (Recommended)

```text
~/project
├── src/                # All upstream sources
│   ├── riscv-gnu-toolchain
│   ├── u-boot
│   ├── opensbi
│   ├── linux
│   └── buildroot
├── build/
│   └── bsp/            # BSP patches
└── toolchains/
    ├── riscv32-elf/
    └── riscv32-linux/
```

---

## 7. GNU Toolchain – Dependencies

```bash
sudo apt update
sudo apt install -y \
  autoconf automake autotools-dev curl python3 \
  libmpc-dev libmpfr-dev libgmp-dev gawk build-essential \
  bison flex texinfo gperf libtool patchutils bc \
  zlib1g-dev libexpat-dev ninja-build git cmake
```

---

## 8. GNU Toolchain – Source

```bash
cd ~/project/src
git clone https://github.com/riscv/riscv-gnu-toolchain
cd riscv-gnu-toolchain
```

> Repository size: ~7 GB

---

## 9. Toolchain Prefix Setup

```bash
export RISCV32_ELF=~/project/toolchains/riscv32-elf
export RISCV32_LINUX=~/project/toolchains/riscv32-linux
export PATH="$RISCV32_ELF/bin:$RISCV32_LINUX/bin:$PATH"
```

---

## 10. Build Bare‑metal Toolchain (RV32IMAC)

```bash
./configure \
  --prefix=$RISCV32_ELF \
  --with-arch=rv32imac \
  --with-abi=ilp32

make -j$(nproc)
```

Produces:
- riscv32-unknown-elf-gcc
- newlib

---

## 11. Build Linux Toolchain (RV32GC + glibc)

```bash
./configure \
  --prefix=$RISCV32_LINUX \
  --with-arch=rv32gc \
  --with-abi=ilp32d

make -j$(nproc) linux
```

Produces:
- riscv32-unknown-linux-gnu-gcc
- glibc sysroot

---

## 12. Verify Toolchains

```bash
riscv32-unknown-elf-gcc --version
riscv32-unknown-linux-gnu-gcc --version
```

---

## 13. U‑Boot (v2025.07)

### 13.1 Dependencies

```bash
sudo apt install -y \
  build-essential bc bison flex git \
  libssl-dev libncurses-dev libelf-dev \
  device-tree-compiler swig pkg-config \
  python3 python3-dev python3-setuptools \
  python3-pyelftools u-boot-tools
```

### 13.2 Clone & Checkout

```bash
cd ~/project/src
git clone https://source.denx.de/u-boot/u-boot.git
cd u-boot
git checkout v2025.07
git describe --tags
```

Expected:
```
v2025.07
```

### 13.3 Apply BSP Patch

```bash
git apply --whitespace=fix ~/RV32/build/bsp/shakti_uboot.patch
git status
```

---

## 14. Build U‑Boot

```bash
export CROSS_COMPILE=riscv32-unknown-linux-gnu-
make distclean
make -j$(nproc)
```

Outputs:
- u-boot
- u-boot.bin
- u-boot.elf

---

## 15. OpenSBI (v1.7)

OpenSBI provides the **RISC-V Supervisor Binary Interface** and is the first stage executed after ROM. In this setup, OpenSBI is built with **U-Boot as a payload**.

### 15.1 Clone & Checkout

```bash
cd ~/project/src
git clone https://github.com/riscv-software-src/opensbi.git
cd opensbi
git checkout v1.7
git describe --tags
```

Expected:
```
v1.7
```

---

### 15.2 Apply BSP Patch

```bash
git apply --whitespace=fix ~/RV32/build/bsp/shakti_opensbi.patch
git status
```

---

### 15.3 Build OpenSBI with U-Boot Payload (Yamuna)

> **Important:** U-Boot must be built **before** OpenSBI.

#### U-Boot Path

This guide assumes U-Boot is located at:

```text
~/RV32/src/u-boot/u-boot.bin
```

If your U-Boot binary is elsewhere, update `FW_PAYLOAD_PATH` accordingly.

#### Build Command

```bash
cd ~/RV32/opensbi

export CROSS_COMPILE=riscv32-unknown-linux-gnu-

make \
  PLATFORM=cclass/yamuna \
  FW_TEXT_START=0x80000000 \
  FW_PAYLOAD_PATH=../u-boot/u-boot.bin \
  -j$(nproc)
```

---

### 15.4 OpenSBI Build Outputs

After a successful build, the firmware artifacts are generated under:

```bash
opensbi/build/platform/cclass/yamuna/firmware/
```

List of important files:

```text
fw_payload.elf        # OpenSBI + U-Boot (ELF, for debugging)
fw_payload.bin        # OpenSBI + U-Boot (binary image)
fw_payload.o          # Intermediate object
fw_payload.elf.ld     # Linker script
fw_payload.dep        # Dependency file
fw_payload.elf.dep    # ELF dependency file
payloads/             # Payload staging directory
```

---

### 15.5 Primary Output (Recommended)

✔ **Final firmware image:**

```text
fw_payload.elf
```

This ELF contains:

```
[ ROM ] → OpenSBI → U-Boot → Linux
```


---
```

---

## 16. Linux Kernel (v6.16)

### 16.1 Clone & Checkout

```bash
cd ~/project/src
git clone https://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable.git linux
cd linux
git checkout v6.16
git describe --tags
```

### 16.2 Apply BSP Patch

```bash
git apply --check ~/project/build/bsp/shakti_linux.patch
git apply --whitespace=fix ~/project/build/bsp/shakti_linux.patch
git status
```

### 16.3 Build Kernel

```bash
export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

make mrproper
make shakti_yamuna_32_defconfig
make -j$(nproc)
```

Verify:

```bash
ls -lh arch/riscv/boot/Image
```

---

## 17. Buildroot (Root Filesystem)

```bash
cd ~/project/src
git clone https://gitlab.com/buildroot.org/buildroot.git
cd buildroot
```

Apply patch:

```bash
git apply --check ~/project/build/bsp/shakti_buildroot.patch
git apply --whitespace=fix ~/project/build/bsp/shakti_buildroot.patch
git status
```

Build:

```bash
make clean
make shakti_yamuna_defconfig
make -j$(nproc)
```

Verify output:

```bash
ls -lh output/images
```

---



