**Project Summary**

This is a bootflow simulator with HAL built to mimic how embedded devices (like MediaTek, STM32, Android HAL) boot, load drivers, abstract hardware, manage power, and shut down.

**What It Simulates**

- BIOS: POST & Memory Init  
- UEFI: Secure Boot & Boot Device Mount  
- Bootloader: Loads Kernel into memory  
- Kernel: Driver manager + HAL abstraction  
- HAL: Abstracts keyboard & battery hardware  
- ACPI: Power management (sleep + resume)  
- Shutdown: Graceful driver unload + power off  

---
**Technologies Used**

- Language: C++17  
- Build System: CMake  
- OOP Concepts: Inheritance, composition, encapsulation  
- Platform: Linux

---

**Folder Structure**

```
HAL_Project/
├── main.cpp                    # Main boot sequence
├── CMakeLists.txt              # Build config
│
├── boot/                       # Bootflow stages
│   ├── bios.{h,cpp}
│   ├── uefi.{h,cpp}
│   ├── bootloader.{h,cpp}
│   ├── kernel.{h,cpp}
│   └── shutdown_manager.{h,cpp}
│
├── drivers/                    # HAL-abstracted drivers
│   ├── driver_base.h
│   ├── keyboard_driver.{h,cpp}
│   └── battery_driver.{h,cpp}
│
├── hal/                        # Hardware Abstraction Layer
│   ├── keyboard_hal.{h,cpp}
│   └── battery_hal.{h,cpp}
│
└── acpi/                       # Power manager
    └── acpi_manager.{h,cpp}
```

---

**Full System Flow**

```
           +---------------------+
           |        BIOS         |
           |---------------------|
           | - POST              |
           | - Memory Init       |
           +----------+----------+
                      |
                      v
           +---------------------+
           |        UEFI         |
           |---------------------|
           | - Secure Boot Check |
           | - Mount Boot Device |
           +----------+----------+
                      |
                      v
           +---------------------+
           |     BOOTLOADER      |
           |---------------------|
           | - Load Kernel       |
           | - Transfer Control  |
           +----------+----------+
                      |
                      v
           +---------------------+
           |       KERNEL        |
           |---------------------|
           | - Load Drivers      |
           | - Call HAL Init     |
           +----------+----------+
                      |
                      v
           +---------------------+
           |        ACPI         |
           |---------------------|
           | - Sleep (3s)        |
           | - Resume Log        |
           +----------+----------+
                      |
                      v
           +---------------------+
           |     SHUTDOWN MGR    |
           |---------------------|
           | - Unload Drivers    |
           | - Shutdown Log      |
           +---------------------+
```

---

**How to Build and Run**

```bash
# Go to project root
cd HAL_Project

# Create build folder and compile
mkdir build && cd build
cmake ..
make

# Run the simulation
./hal_main
```

---

**Sample Boot Log**

```
[BIOS] Running Power-On Self-Test (POST)...
[BIOS] All hardware passed.
[BIOS] Memory OK.
[UEFI] Secure Boot ENABLED.
[UEFI] Boot device mounted successfully.
[BOOTLOADER] Executing kernel at 0x800000...
[KERNEL] Initializing device drivers...
[HAL] Keyboard HAL initialized (PS/2 emulation).
[HAL] Battery HAL initialized (Li-ion 3-cell simulation).
[ACPI] System entering sleep state for 3 seconds...
[ACPI] Waking up from sleep...
[SHUTDOWN] Initiating system shutdown...
[DRIVER] Unloading KeyboardDriver...
[HAL] Keyboard HAL shutting down.
[DRIVER] Unloading BatteryDriver...
[HAL] Battery HAL shutting down.
[SHUTDOWN] System power off complete. Goodbye.
```
