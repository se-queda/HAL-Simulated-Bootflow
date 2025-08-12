#include "battery_driver.h"
#include <iostream>

void BatteryDriver::load() {
    std::cout << "[DRIVER] Loading BatteryDriver..." << std::endl;
    hal.initialize();
}

void BatteryDriver::unload() {
    std::cout << "[DRIVER] Unloading BatteryDriver..." << std::endl;
    hal.shutdown();
}

