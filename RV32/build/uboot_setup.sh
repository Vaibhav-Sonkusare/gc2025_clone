#!/bin/sh
set -e

UBOOT_REPO=https://source.denx.de/u-boot/u-boot.git
UBOOT_TAG=v2025.07

PATCH=~/project/build/bsp/shakti_uboot.patch
DEST=~/project/build/u-boot

echo "Cloning U-Boot..."
if [ ! -d "$DEST" ]; then
    git clone $UBOOT_REPO $DEST
fi

cd $DEST

echo "Checking out $UBOOT_TAG..."
git fetch --tags
git checkout -f $UBOOT_TAG

echo "Cleaning tree..."
git reset --hard
git clean -fd

echo "Applying patch..."
git apply $PATCH

echo "Done."

