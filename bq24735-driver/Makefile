KERNEL?=$(shell uname -r)
modname=bq24735-charger
obj-m := $(modname).o
all:
	make ARCH=arm64 -C $(BASE_ROOT)/lib/modules/$(KERNEL)/build M=$(PWD) INSTALL_MOD_PATH=$(BASE_ROOT) modules
