#!/bin/bash
set -e

# ========= CONFIG =========
LINUX_REPO=https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git
LINUX_VERSION=v6.16
BUILD_DIR=$HOME/project/build
PATCH_DIR=$BUILD_DIR/bsp
LINUX_PATCH=shakti_linux.patch
LINUX_SRC=$BUILD_DIR/linux
# ==========================

echo "=== Linux setup started ==="

# Create build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

# Clone Linux if not present
if [ ! -d "$LINUX_SRC" ]; then
    echo "Cloning Linux kernel..."
    git clone "$LINUX_REPO" linux
else
    echo "Linux source already exists"
fi

cd "$LINUX_SRC"

# Fetch tags and checkout version
echo "Checking out Linux version $LINUX_VERSION"
git fetch --tags
git checkout "$LINUX_VERSION"

# Apply patch
echo "Applying Linux patch: $LINUX_PATCH"
git apply "$PATCH_DIR/$LINUX_PATCH"

echo "=== Linux patch applied successfully ==="

