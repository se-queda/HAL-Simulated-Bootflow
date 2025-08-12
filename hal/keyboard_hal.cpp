#include "keyboard_hal.h"
#include <iostream>

void KeyboardHAL::initialize() {
    std::cout << "[HAL] Keyboard HAL initialized (PS/2 emulation)." << std::endl;
}

void KeyboardHAL::shutdown() {
    std::cout << "[HAL] Keyboard HAL shutting down." << std::endl;
}

