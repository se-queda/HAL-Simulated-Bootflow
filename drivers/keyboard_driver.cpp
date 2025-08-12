#include "keyboard_driver.h"
#include <iostream>
#include <thread>
#include <chrono>

#include "keyboard_driver.h"

void KeyboardDriver::load() {
    std::cout << "[DRIVER] Loading KeyboardDriver..." << std::endl;
    hal.initialize();
}

void KeyboardDriver::unload() {
    std::cout << "[DRIVER] Unloading KeyboardDriver..." << std::endl;
    hal.shutdown();
}
