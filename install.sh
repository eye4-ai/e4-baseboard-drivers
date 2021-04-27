#!/bin/bash

# Add all items to be copied in the following format: "<filename> <relative git path> <u00 path>"
declare -a cp_src_dest=(
    "wf200.pds wfm200/ /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs/lib/firmware/"
    "wfm_wf200_C0.sec wfm200/ /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs/lib/firmware/"
    "tegra19x-mb1-pinmux-p3668-a01.cfg wfm200/ /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/bootloader/t186ref/BCT/"
    "bq24735-charger.c bq24735-driver/ /u00/e4-baseboard-xavier-nx-32.4.5/Linux_for_Tegra/rootfs-dev/usr/src/sources/kernel/kernel-4.9/drivers/power/supply/"
)

r_flag=false

print_usage() {
  printf "Usage: Copies files from this git repo to correct places in Linx for Tegra folder. Use -r flag to copy files back to git repo, so any changes can be captured.\n"
}

while getopts 'rh' flag; do
  case "${flag}" in
    r) r_flag=true ;;
    h) print_usage
       exit 0 ;;
    *) print_usage
       exit 1 ;;
  esac
done

for i in "${cp_src_dest[@]}"
do
    set -- $i
    if $r_flag ;then
        cp -v $3$1 $2
    else
        cp -v $2$1 $3
    fi
done
