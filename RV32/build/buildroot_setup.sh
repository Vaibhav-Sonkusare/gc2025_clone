#!/bin/bash
set -e

# ========= CONFIG =========
BASE_DIR=$HOME/project/build
BUILDROOT_REPO=https://github.com/buildroot/buildroot.git
BUILDROOT_VER=2025.08.2
PATCH_FILE=$BASE_DIR/shakti_buildroot.patch
BUILDROOT_DIR=$BASE_DIR/buildroot
# ==========================

apply_patch() {
    if git apply --check "$PATCH_FILE" >/dev/null 2>&1; then
        git apply "$PATCH_FILE"
        echo "Patch applied: $(basename $PATCH_FILE)"
    else
        echo "Patch already applied or not applicable"
    fi
}

mkdir -p "$BASE_DIR"
cd "$BASE_DIR"

# Clone Buildroot if missing
if [ ! -d "$BUILDROOT_DIR" ]; then
    echo "Cloning Buildroot..."
    git clone "$BUILDROOT_REPO" buildroot
fi

cd "$BUILDROOT_DIR"

# Checkout required version
git fetch --tags
git checkout "$BUILDROOT_VER"

# Apply patch
apply_patch

echo "=== Buildroot setup completed successfully ==="

