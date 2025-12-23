#!/usr/bin/env bash
set -euo pipefail

# Linux_RV32 root (this script is in Linux_RV32/scripts)
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

UBOOT_REPO="https://github.com/u-boot/u-boot.git"
UBOOT_TAG="v2025.07"
UBOOT_DIR="${ROOT_DIR}/Downloads/u-boot"

PATCH_FILE="${ROOT_DIR}/bsp/patches/u-boot/shakti_uboot.patch"
DEFCONFIG_SRC="${ROOT_DIR}/bsp/defconfig/shakti_uboot_defconfig"
DEFCONFIG_NAME="shakti_uboot_defconfig"

export ARCH=riscv
export CROSS_COMPILE=riscv32-unknown-linux-gnu-

echo "ROOT_DIR   : ${ROOT_DIR}"
echo "U-Boot repo: ${UBOOT_REPO}"
echo "U-Boot tag : ${UBOOT_TAG}"
echo "U-Boot dir : ${UBOOT_DIR}"
echo "Defconfig  : ${DEFCONFIG_SRC}"
echo "Patch      : ${PATCH_FILE}"
echo

# ---- sanity checks ----
if [[ ! -f "${DEFCONFIG_SRC}" ]]; then
  echo "ERROR: Defconfig not found: ${DEFCONFIG_SRC}"
  exit 1
fi

if ! command -v "${CROSS_COMPILE}gcc" >/dev/null 2>&1; then
  echo "ERROR: Toolchain not found: ${CROSS_COMPILE}gcc"
  echo "Hint: install first using: ${ROOT_DIR}/scripts/riscv32_linux_toolchain_imac_install.sh"
  exit 1
fi

mkdir -p "${ROOT_DIR}/Downloads"

# ---- always fresh clone to avoid patch conflicts ----
if [[ -d "${UBOOT_DIR}" ]]; then
  echo "Removing existing U-Boot directory for a clean run..."
  rm -rf "${UBOOT_DIR}"
fi

echo "Cloning U-Boot..."
git clone "${UBOOT_REPO}" "${UBOOT_DIR}"

cd "${UBOOT_DIR}"

echo "Checking out ${UBOOT_TAG}..."
git fetch --all --tags
git checkout -f "${UBOOT_TAG}"

echo "Cleaning tree..."
make distclean

# ---- apply patch (optional) ----
if [[ -f "${PATCH_FILE}" ]]; then
  echo "Applying patch..."
  git apply --whitespace=nowarn "${PATCH_FILE}"
else
  echo "Patch not found (skipping)."
fi

# ---- copy defconfig AFTER clone (your request) ----
echo "Copying BSP defconfig into U-Boot configs/ ..."
cp -v "${DEFCONFIG_SRC}" "configs/${DEFCONFIG_NAME}"

echo "Configuring using ${DEFCONFIG_NAME}..."
make "${DEFCONFIG_NAME}"

# Accept defaults and avoid interactive Kconfig prompts (if any)
make olddefconfig

echo "Building U-Boot..."
make -j"$(nproc)"

echo
echo "✅ Build outputs:"
ls -1 u-boot u-boot.bin u-boot.map u-boot-nodtb.bin 2>/dev/null || true
echo
echo "Done. U-Boot at: ${UBOOT_DIR}"
