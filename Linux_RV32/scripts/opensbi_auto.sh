#!/bin/sh

# ===== Paths =====
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
PATCH_FILE="$SCRIPT_DIR/bsp/shakti_opensbi.patch"
OPENSBI_DIR="$SCRIPT_DIR/opensbi"
OPENSBI_REPO="https://github.com/riscv-software-src/opensbi.git"
OPENSBI_TAG="v1.7"
# =================

echo "=== OpenSBI patch automation ==="

# Check patch file
if [ ! -f "$PATCH_FILE" ]; then
    echo "ERROR: Patch file not found:"
    echo "  $PATCH_FILE"
    exit 1
fi

# Clone OpenSBI if missing
if [ ! -d "$OPENSBI_DIR/.git" ]; then
    echo "Cloning OpenSBI..."
    git clone "$OPENSBI_REPO" "$OPENSBI_DIR" || exit 1
fi

cd "$OPENSBI_DIR" || exit 1

echo "Checking out OpenSBI $OPENSBI_TAG"
git fetch --all --tags
git checkout "$OPENSBI_TAG" || exit 1

echo "Cleaning tree"
git reset --hard
git clean -fd

echo "Applying patch"
git apply --whitespace=fix "$PATCH_FILE" || exit 1

echo "✅ Patch applied successfully"

