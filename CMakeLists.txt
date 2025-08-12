cmake_minimum_required(VERSION 3.10)
project(HAL_Project)

set(CMAKE_CXX_STANDARD 17)

include_directories(boot)

add_executable(hal_main
   main.cpp

    boot/bios.cpp
    boot/uefi.cpp
    boot/bootloader.cpp
    boot/kernel.cpp
    boot/shutdown_manager.cpp

    drivers/driver_base.h
    drivers/keyboard_driver.cpp
    drivers/battery_driver.cpp

    hal/keyboard_hal.cpp
    hal/battery_hal.cpp

    acpi/acpi_manager.cpp
)
