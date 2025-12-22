#!/bin/sh
set -e

UBOOT_REPO="https://source.denx.de/u-boot/u-boot.git"
UBOOT_TAG="v2025.07"

# Directory where this script lives
SCRIPT_DIR="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"

# Patch and destination relative to your current project folder
PATCH="${SCRIPT_DIR}/bsp/shakti_uboot.patch"
DEST="${SCRIPT_DIR}/u-boot"

echo "Using patch: $PATCH"
echo "Using U-Boot dir: $DEST"

if [ ! -f "$PATCH" ]; then
  echo "ERROR: Patch not found: $PATCH"
  exit 1
fi

echo "Cloning U-Boot..."
if [ ! -d "$DEST/.git" ]; then
  git clone "$UBOOT_REPO" "$DEST"
fi

cd "$DEST"

echo "Checking out $UBOOT_TAG..."
git fetch --tags
git checkout -f "$UBOOT_TAG"

echo "Cleaning tree..."
git reset --hard
git clean -fd

echo "Applying patch..."
git apply "$PATCH"

echo "Done."

