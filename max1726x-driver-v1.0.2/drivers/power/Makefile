KERNEL?=$(shell uname -r)
modname=max1726x_battery
obj-m := $(modname).o
all:
	make ARCH=arm64 -C /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs-dev/usr/src/sources/kernel/kernel-4.9/out M=$(PWD) modules
