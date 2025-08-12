// boot/kernel.cpp
#include "kernel.h"
#include "../drivers/keyboard_driver.h"
#include "../drivers/battery_driver.h"
#include <iostream>
#include <thread>
#include <chrono>

void Kernel::boot() {
    std::cout << "[KERNEL] Booting custom OS kernel (v0.1-Freini)..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
}

void Kernel::loadDrivers() {
    std::cout << "[KERNEL] Initializing device drivers..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    KeyboardDriver keyboard;
    keyboard.load();

    BatteryDriver battery;
    battery.load();

    std::cout << "[KERNEL] All drivers initialized successfully." << std::endl;
}

void Kernel::handOverToACPI() {
    std::cout << "[KERNEL] Handing control to ACPI Manager for power management..." << std::endl;
}
