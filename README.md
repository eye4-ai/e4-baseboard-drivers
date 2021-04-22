# e4-baseboard-drivers

## WFM200

wf200.pds and wfm_wf200_C0.sec need to be in /lib/firmware/. These are loaded automatically by the wfx driver.

eye4.pds.in is the file used to create wf200.pds

tegra19x-mb1-pinmux-p3668-a01.cfg is the modified pinmux to enable SPI and needs to be in <L4T>/bootloader/t186ref/BCT/.

