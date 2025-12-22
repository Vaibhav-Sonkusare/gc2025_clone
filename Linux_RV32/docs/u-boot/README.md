# U-Boot – Simple Explanation and Build Guide (RV32)

## What is U-Boot?

**U-Boot is a program that starts Linux.**

When you power ON a board, **Linux cannot start by itself**.  
Some software must prepare the hardware first.  
That software is **U-Boot**.

---

## Boot Flow (RISC-V)

Power ON
↓
OpenSBI (RISC-V firmware)
↓
U-Boot (bootloader)
↓
Linux Kernel
↓
Linux System (root filesystem)

---

## What U-Boot Does (Simple)

U-Boot:
- Initializes **RAM (memory)**
- Initializes **UART (serial console)**
- Loads the **Linux kernel**
- Loads the **Device Tree (DTB)**
- Passes control to Linux

👉 After this, **Linux starts running**

---

## Why U-Boot is Needed

Linux:
- Does **NOT** initialize hardware
- Expects memory and console to be ready

U-Boot:
- Prepares the hardware
- Starts Linux correctly

➡️ **Linux needs U-Boot to boot**

---

## U-Boot in One Line

> **U-Boot runs before Linux and helps Linux start.**

---

## RISC-V Note (Important)

On RISC-V systems:
- **OpenSBI** runs first (low-level firmware)
- **U-Boot** runs next (bootloader)
- **Linux** runs last (operating system)

---

## U-Boot Output Files

After building U-Boot, you may see:

- `u-boot`           → main bootloader (ELF)
- `u-boot.bin`       → binary used by OpenSBI
- `u-boot.map`       → memory map
- `u-boot-nodtb.bin` → U-Boot without DTB

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RV32 Linux toolchain installed  
  (`riscv32-unknown-linux-gnu-`)

---

## 1) Install Dependencies

```bash
sudo apt-get update

sudo apt-get install -y \
  git \
  make \
  gcc \
  g++ \
  bc \
  bison \
  flex \
  libssl-dev \
  libncurses-dev \
  python3 \
  python3-pip \
  device-tree-compiler \
  swig \
  rsync \
  wget \
  curl

2) Clone U-Boot (in Downloads Folder)
cd ~/PATH/gc2025/Linux_RV32/Downloads
git clone https://github.com/u-boot/u-boot.git
cd u-boot

3) Checkout Required U-Boot Version
git fetch --all --tags
git checkout v2025.07
Verify:

git describe --tags
Expected output:

v2025.07

4) Apply BSP Patch (Normal Patch Style)
patch -p1 < ../../bsp/patches/u-boot/shakti_uboot.patch
If there are no errors, the patch is applied successfully ✅

5) Export Build Environment
export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-
6) Configure U-Boot (Board Defconfig)
Copy BSP defconfig:

cp ../../bsp/defconfig/u-boot/shakti_uboot_defconfig \
   configs/shakti_yamuna_defconfig
Clean source tree:

make distclean
Configure:

make shakti_yamuna_defconfig
7) Build U-Boot
make -j$(nproc)
During build you may see this warning:

WARNING: CONFIG_OF_EMBED is enabled
This is expected for this BSP and can be ignored.

8) Verify Build Output
ls u-boot*
Expected files include:

python
Copy code
u-boot
u-boot.bin
u-boot.map
u-boot-nodtb.bin
Notes
Always checkout the correct U-Boot version before applying patches

U-Boot is later used together with OpenSBI

Final boot image is usually created by OpenSBI using u-boot.bin
