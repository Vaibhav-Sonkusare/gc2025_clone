#!/usr/bin/env bash
set -euo pipefail

# Root of Linux_RV32 (this script is in Linux_RV32/scripts)
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

UBOOT_VER="v2025.07"
UBOOT_DIR="${ROOT_DIR}/Downloads/u-boot"

DEFCONFIG_SRC="${ROOT_DIR}/bsp/defconfig/shakti_uboot_defconfig"
PATCH_FILE="${ROOT_DIR}/bsp/patches/u-boot/shakti_uboot.patch"

# Toolchain env (adjust if your prefix differs)
export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

echo "ROOT_DIR      : ${ROOT_DIR}"
echo "U-Boot version: ${UBOOT_VER}"
echo "U-Boot dir    : ${UBOOT_DIR}"
echo "DEFCONFIG     : ${DEFCONFIG_SRC}"
echo "PATCH (opt)   : ${PATCH_FILE}"
echo

# Basic checks
if ! command -v "${CROSS_COMPILE}gcc" >/dev/null 2>&1; then
  echo "ERROR: Toolchain not found: ${CROSS_COMPILE}gcc"
  echo "Hint: install/enable riscv32 toolchain first (your scripts include riscv32_* installers)."
  exit 1
fi

if [[ ! -f "${DEFCONFIG_SRC}" ]]; then
  echo "ERROR: Defconfig not found: ${DEFCONFIG_SRC}"
  exit 1
fi

mkdir -p "${ROOT_DIR}/Downloads"

# Clone or update
if [[ ! -d "${UBOOT_DIR}/.git" ]]; then
  echo "Cloning U-Boot..."
  git clone https://github.com/u-boot/u-boot.git "${UBOOT_DIR}"
else
  echo "U-Boot repo already exists. Updating..."
  git -C "${UBOOT_DIR}" fetch --all --tags
fi

cd "${UBOOT_DIR}"

echo "Checking out ${UBOOT_VER}..."
git fetch --all --tags
git checkout "${UBOOT_VER}"

echo "Cleaning tree..."
make distclean

# Optional patch
if [[ -f "${PATCH_FILE}" ]]; then
  echo "Applying patch: ${PATCH_FILE}"
  git apply "${PATCH_FILE}"
else
  echo "Patch not found (skipping): ${PATCH_FILE}"
fi

echo "Copying BSP defconfig..."
cp -v "${DEFCONFIG_SRC}" configs/

# NOTE: Your README says:
#   make shakti_yamuna_defconfig
# That target must exist in U-Boot. We'll try it, and fall back cleanly.
echo "Configuring..."
if make shakti_yamuna_defconfig; then
  echo "Configured: shakti_yamuna_defconfig"
else
  echo "WARN: 'make shakti_yamuna_defconfig' failed."
  echo "Trying to use the copied config directly (old-style) ..."
  # Attempt a fallback: if the defconfig file name implies a defconfig target, try it
  # (e.g., shakti_uboot_defconfig -> make shakti_uboot_defconfig)
  FALLBACK_TARGET="$(basename "${DEFCONFIG_SRC}")"
  if make "${FALLBACK_TARGET}"; then
    echo "Configured: ${FALLBACK_TARGET}"
  else
    echo "ERROR: Could not configure. Check which defconfig target exists in configs/."
    echo "Try: ls configs | grep -i shakti"
    exit 1
  fi
fi

echo "Building U-Boot..."
make -j"$(nproc)"

echo
echo "Build done. Outputs:"
ls -1 u-boot u-boot.bin u-boot.map u-boot-nodtb.bin 2>/dev/null || true
echo
echo "U-Boot directory: ${UBOOT_DIR}"
