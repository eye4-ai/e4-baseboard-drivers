KERNEL?=$(shell uname -r)
modname=bq24735-charger
obj-m := $(modname).o

all:
	make -C $(BASE_ROOT)/lib/modules/$(KERNEL)/build M=$(PWD) INSTALL_MOD_PATH=$(BASE_ROOT) modules
install:
	make -C $(BASE_ROOT)/lib/modules/$(KERNEL)/build M=$(PWD) INSTALL_MOD_PATH=$(BASE_ROOT) modules_install
clean:
	rm -fR .*.cmd *.o *.ko .tmp_versions Module.symvers modules.order *.mod.c
