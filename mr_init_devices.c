#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/devices/tegradc.0/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", //efs
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p6", //misc
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p8", //data
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p10", //extra
    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    //"/sys/bus/mmc/drivers/mmc_test",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    "/sys/devices/platform/gpio-keys.0/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
    "/sys/devices/platform/tegra-i2c.1/i2c-1/1-004c/input/input1", // touch screen
    "/sys/devices/platform/tegra-i2c.1/i2c-1/1-004c/input/input1/event1",
    "/sys/devices/platform/tegra-kbc/input/input0", // sec_key

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p4", // /system
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p5", // /cache
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",

    // USB drive is in here
    //"/sys/devices/platform/tegra-ehci.0*",

    NULL
};
