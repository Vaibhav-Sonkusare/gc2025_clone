#!/bin/bash
set -e

# ========= CONFIG =========
BUILDROOT_REPO="https://github.com/buildroot/buildroot.git"
BUILDROOT_VER="2025.11"

# Directory where this script lives (your repo root)

# Repo-local locations
BUILDROOT_DIR="${SCRIPT_DIR}/buildroot"
# ==========================

echo "=== Buildroot setup started ==="
echo "Buildroot dir : $BUILDROOT_DIR"
echo "Patch file    : $PATCH_FILE"
echo "Version       : $BUILDROOT_VER"
echo

# Check patch exists
if [ ! -f "$PATCH_FILE" ]; then
  echo "ERROR: Patch not found: $PATCH_FILE"
  exit 1
fi

# Clone Buildroot if missing
if [ ! -d "$BUILDROOT_DIR/.git" ]; then
  echo "Cloning Buildroot..."
  git clone "$BUILDROOT_REPO" "$BUILDROOT_DIR"
else
  echo "Buildroot already exists"
fi

cd "$BUILDROOT_DIR"

# Checkout required version
git fetch --tags
git checkout -f "$BUILDROOT_VER"

# Clean tree (recommended)
git reset --hard
git clean -fd

# Apply patch

echo "=== Buildroot setup completed successfully ==="

