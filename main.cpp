#include "boot/bios.h"
#include "boot/uefi.h"
#include "boot/kernel.h"
#include "acpi/acpi_manager.h"
#include "boot/shutdown_manager.h"

int main() {
    BIOS bios;
    bios.runPOST();
    bios.initializeMemory();
    bios.handOverToUEFI();

    UEFI uefi;
    uefi.verifySecureBoot();
    uefi.mountBootDevice();
    uefi.loadBootloader();

    Kernel kernel;
    kernel.boot();
    kernel.loadDrivers();
    kernel.handOverToACPI();

    ACPImanager acpi;
    acpi.sleepForSeconds(3);
    acpi.wakeUp();

    ShutdownManager shutdown;
    shutdown.initiateShutdown();

    return 0;
}

