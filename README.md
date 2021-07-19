# e4-baseboard-drivers

Alongside extra drivers, this repo contains scripts to help setup and run command commands when customising the baseboard kernel.

## Scripts

All scripts except for `kernel_config.sh` should be run as root!

- `setup_baseboard_env.sh`: installs all the files necessary to build the kernel for the baseboard
- `install.sh`: copies files from this repo to the correct places in the baseboard build directory. You can also add the `-r` flag to do the reverse copy (from build folders to this repo), so you can capture any changes
- `flash_new_dt.sh`: flashes the baseboard with any device tree changes that have happened. Significantly faster than flashing the whole system image
- `flash_new_kernel.sh`: flashes the baseboard with any changes made. Warning: erases all data on baseboard and takes a while
- `kernel_config.sh`: open the kernel config GUI

## Flashing

To flash the board, first connect it via USB and put it in recovery mode (hold recovery while releasing reset button or use command `sudo reboot --force forced-recovery`). You can then use one of the `flash_new_*.sh` scripts or open a root terminal in `/u00/Linux_for_Tegra` folder and run:

```bash
./flash.sh p3449-0000+p3668-0001-qspi-emmc mmcblk0p1
```

## WFM200

eye4.pds.in is the file used to create wf200.pds

## BQ24735-driver

Source file has been modified to disable watchdog when enabling charging

## Misc

default login details:

- user: e4
- pwd: test

rootfs is what is flashed onto device, don't touch it much.
rootfs-dev is for experimetation, usin qemu.

When working inside `/u00/e4-baseboard-xavier-nx-32.4.5/`, do all operations as root! You can use `sudo bash` to open a root shell.
