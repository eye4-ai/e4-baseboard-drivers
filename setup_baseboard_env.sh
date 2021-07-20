#!/bin/bash

# Install required packages
apt-get update
apt-get install -y git build-essential bc pkg-config libqt4-dev
# Install main directory
mkdir -p /u00/e4-baseboard-xavier-nx-32.4.5
cd /u00/e4-baseboard-xavier-nx-32.4.5
wget https://dev.eye4.ai/Linux_for_Tegra.tar.gz
tar xpzf Linux_for_Tegra.tar.gz
rm Linux_for_Tegra.tar.gz
# Install toolchain
mkdir -p /opt/l4t
cd /opt/l4t
wget http://releases.linaro.org/components/toolchain/binaries/7.3-2018.05/aarch64-linux-gnu/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu.tar.xz
tar xf gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu.tar.xz 
rm gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu.tar.xz 
# Setup device tree
cd /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs-dev/usr/src/sources/hardware
rm README.md
rm -rf nvidia/
rm -rf .git/
git clone git@github.com:eye4-ai/e4-baseboard-devicetree.git .