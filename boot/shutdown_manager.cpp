#include "shutdown_manager.h"
#include "../drivers/keyboard_driver.h"
#include "../drivers/battery_driver.h"
#include <iostream>
#include <thread>
#include <chrono>

void ShutdownManager::initiateShutdown() {
    std::cout << "[SHUTDOWN] Initiating system shutdown..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    KeyboardDriver keyboard;
    BatteryDriver battery;

    keyboard.unload();
    battery.unload();

    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    std::cout << "[SHUTDOWN] All drivers unloaded successfully." << std::endl;
    std::cout << "[SHUTDOWN] System power off complete. Goodbye." << std::endl;
}

