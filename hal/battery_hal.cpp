#include "battery_hal.h"
#include <iostream>

void BatteryHAL::initialize() {
    std::cout << "[HAL] Battery HAL initialized (Li-ion 3-cell simulation)." << std::endl;
}

void BatteryHAL::shutdown() {
    std::cout << "[HAL] Battery HAL shutting down." << std::endl;
}

