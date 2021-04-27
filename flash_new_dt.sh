#!/bin/bash

current_dir=$PWD

cd /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs-dev/usr/src/sources/kernel/kernel-4.9
export CROSS_COMPILE="/opt/l4t/gcc-linaro-7.3.1-2018.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-"
export TEGRA_KERNEL_OUT="/u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs-dev/usr/src/sources/kernel/kernel-4.9/out"
make ARCH=arm64 O=$TEGRA_KERNEL_OUT -j8
cp $TEGRA_KERNEL_OUT/arch/arm64/boot/Image /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/kernel/Image
cp -r $TEGRA_KERNEL_OUT/arch/arm64/boot/dts/* /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/kernel/dtb/

cd /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra
./flash.sh -r -k kernel-dtb p3449-0000+p3668-0001-qspi-emmc mmcblk0p1

cd $current_dir
