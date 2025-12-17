#!/bin/bash
set -euo pipefail

# ========= CONFIG =========
BASE_DIR="$HOME/project/build"
SRC_DIR="$BASE_DIR/riscv-gnu-toolchain"
PREFIX_DIR="$HOME/opt/riscv"          # install here
JOBS="$(nproc)"
REPO_URL="https://github.com/riscv-collab/riscv-gnu-toolchain.git"
BASHRC="$HOME/.bashrc"
# ==========================

echo "==> Creating dirs..."
mkdir -p "$BASE_DIR"
mkdir -p "$PREFIX_DIR"

echo "==> Cloning riscv-gnu-toolchain (if missing)..."
if [ ! -d "$SRC_DIR/.git" ]; then
  git clone --recursive "$REPO_URL" "$SRC_DIR"
else
  echo "    Already cloned: $SRC_DIR"
fi

echo "==> Installing build dependencies (Ubuntu/Debian)..."
# Comment this block if you don't want auto-install
sudo apt-get update
sudo apt-get install -y \
  autoconf automake autotools-dev curl python3 python3-pip \
  libmpc-dev libmpfr-dev libgmp-dev gawk build-essential bison flex texinfo \
  gperf libtool patchutils bc zlib1g-dev libexpat-dev ninja-build git cmake

echo "==> Building & installing multilib toolchain to: $PREFIX_DIR"
cd "$SRC_DIR"
# Ensure submodules are present
git submodule update --init --recursive

# Configure for multilib
./configure --prefix="$PREFIX_DIR" --enable-multilib

# Build (this builds the NEWLIB and LINUX toolchains as needed by the repo defaults)
make -j"$JOBS"

echo "==> Adding toolchain to PATH in ~/.bashrc (idempotent)..."
LINE1='export RISCV='"$PREFIX_DIR"
LINE2='export PATH="$RISCV/bin:$PATH"'

# Add only if not already present
grep -qxF "$LINE1" "$BASHRC" 2>/dev/null || echo "$LINE1" >> "$BASHRC"
grep -qxF "$LINE2" "$BASHRC" 2>/dev/null || echo "$LINE2" >> "$BASHRC"

echo "==> Done."
echo "Open a new terminal OR run:"
echo "  source ~/.bashrc"
echo "Check with:"
echo "  riscv64-unknown-elf-gcc -v  ||  riscv64-unknown-linux-gnu-gcc -v"

