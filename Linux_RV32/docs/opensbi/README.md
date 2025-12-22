# OpenSBI v1.7 – Build and Usage Guide (RV32 – Shakti Yamuna)

## What is OpenSBI?

**OpenSBI (Open Supervisor Binary Interface)** is the **first firmware that runs on a RISC-V system**.

On RISC-V platforms:
- Linux **cannot start directly** after power-on
- OpenSBI runs first in **Machine mode (M-mode)**
- It initializes low-level hardware and jumps to the **next stage**
  - usually **U-Boot**
  - or directly to the **Linux kernel**

---

## RISC-V Boot Flow

Power ON  
↓  
OpenSBI (M-mode firmware)  
↓  
U-Boot (bootloader)  
↓  
Linux Kernel (S-mode)  
↓  
Linux User Space (root filesystem)

---

## What OpenSBI Does

OpenSBI provides:
- SBI calls (timer, IPI, RFENCE, console, etc.)
- Transition from **M-mode → S-mode**
- Early console output
- A standard firmware layer for all RISC-V OSes

Linux **depends on OpenSBI** to run correctly on RISC-V.

---

## System Requirements

- Ubuntu 20.04 / 22.04
- Internet connection
- RV32 Linux toolchain installed:
  `riscv32-unknown-linux-gnu-`
- U-Boot source (required for payload build)

---

## Directory Layout

Linux_RV32/
├── Downloads/
│   ├── opensbi/
│   └── u-boot/
├── bsp/
│   └── patches/
│       └── opensbi/
│           └── shakti_opensbi.patch

---

## Install Dependencies

sudo apt update
sudo apt install -y git make gcc g++ python3 python3-pip device-tree-compiler wget curl

---

## Clone OpenSBI

cd ~/gc2025/Linux_RV32/Downloads
git clone https://github.com/riscv-software-src/opensbi.git
cd opensbi

---

## Checkout Version v1.7

git fetch --all --tags
git checkout v1.7

Verify:
git describe --tags

---

## Apply BSP Patch

patch -p1 < ../../bsp/patches/opensbi/shakti_opensbi.patch

---

## Export Toolchain

export CROSS_COMPILE=riscv32-unknown-linux-gnu-

---

## Build OpenSBI (No Payload)

make distclean
make PLATFORM=cclass/yamuna FW_TEXT_START=0x80000000 -j$(nproc)

---

## Build OpenSBI + U-Boot Payload

make distclean
make PLATFORM=cclass/yamuna FW_TEXT_START=0x80000000 FW_PAYLOAD_PATH=../u-boot/u-boot.bin -j$(nproc)

---

## Output Files

build/platform/cclass/yamuna/firmware/

- fw_payload.bin
- fw_payload.elf
- fw_dynamic.bin
- fw_jump.bin

---

## Console

Recommended Linux bootargs:
earlycon=sbi console=hvc0

---

## Summary

OpenSBI initializes hardware → U-Boot loads Linux → Linux runs user space
