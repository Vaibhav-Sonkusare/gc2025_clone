# OpenSBI v1.7 – Simple Explanation and Build Guide (RV32)

## What is OpenSBI?

**OpenSBI is the first firmware that runs on RISC-V.**

On RISC-V boards, Linux cannot start directly after power ON.  
OpenSBI runs first in **Machine mode (M-mode)** and loads the next stage (usually **U-Boot**).

---

## Boot Flow (RISC-V)

Power ON
↓
OpenSBI (M-mode firmware)
↓
U-Boot (bootloader)
↓
Linux Kernel
↓
Linux System (root filesystem)


---

## Requirements

- Ubuntu 20.04 / 22.04
- RV32 Linux toolchain installed:
  `riscv32-unknown-linux-gnu-`
- U-Boot built (only needed if you want OpenSBI + U-Boot payload)

---

## 1) Install Dependencies


sudo apt-get update

sudo apt-get install -y \
  git \
  make \
  gcc \
  g++ \
  python3 \
  python3-pip \
  device-tree-compiler \
  wget \
  curl
  
2) Clone OpenSBI (in Downloads Folder)
cd ~/PATH/gc2025/Linux_RV32/Downloads
git clone https://github.com/riscv-software-src/opensbi.git
cd opensbi

3) Checkout OpenSBI v1.7
git fetch --all --tags
git checkout v1.7
Verify:
git describe --tags
Expected:
v1.7

4) Apply BSP Patch (Normal Patch Style)

patch -p1 < ../../bsp/patches/opensbi/shakti_opensbi.patch
If patch applies without errors → ✅ success

5) Export Build Environment
export CROSS_COMPILE=riscv32-unknown-linux-gnu-
Verify toolchain is found:
which ${CROSS_COMPILE}gcc
Expected:
/opt/riscv32-imac-linux/bin/riscv32-unknown-linux-gnu-gcc

6) Build OpenSBI (Generic)
Clean (recommended):
make distclean

Build:
make PLATFORM=cclass/yamuna FW_TEXT_START=0x80000000  -j$(nproc)


7) Build OpenSBI with U-Boot Payload (Recommended for Boot)
Make sure U-Boot binary exists:
ls -lah ../u-boot/u-boot.bin
Then build payload firmware:

make distclean
make PLATFORM=cclass/yamuna  FW_TEXT_START=0x80000000 FW_PAYLOAD_PATH=      -j$(nproc) 

8) Check Output Files
Firmware outputs are here:
ls -l build/platform/cclass/yamuna/firmware/

fw_payload.bin → OpenSBI + U-Boot (most common boot image)

fw_payload.elf

fw_dynamic.bin

fw_jump.bin




