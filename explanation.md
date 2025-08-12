Module-Level Overview:-

**main.cpp**
Acts as the entry point.

Orchestrates the entire boot flow:

BIOS → UEFI → Bootloader → Kernel → HAL-based Drivers → ACPI → Shutdown

**CMakeLists.txt**

Build configuration file.

Defines the project, sources, and output binary (hal_main).

Lets you build with cmake .. && make inside build/.

*boot/ Modules*

**bios.h/.cpp:**

Simulates POST and memory init.

Logs start of boot.

**uefi.h/.cpp:**

Secure boot check + mounts "boot device".

Prepares to load bootloader.

**bootloader.h/.cpp:**

Pretends to load kernel from address 0x800000.

Hands off to kernel.

**kernel.h/.cpp:**

Initializes drivers through HAL.

Calls init() on keyboard and battery drivers.

shutdown_manager.h/.cpp:

Unloads drivers.

Logs system shutdown.

*drivers/ and hal/*
**driver_base.h:-**

Abstract interface class DeviceDriver.

keyboard_driver.* / battery_driver.*:

Implement DeviceDriver, use respective HALs.

keyboard_hal.* / battery_hal.*:

Contain hardware abstraction logic (simulate I/O).

💤 acpi/
**acpi_manager:-**

Simulates system sleep/wakeup.

Uses std::this_thread::sleep_for() to wait 3 seconds.
