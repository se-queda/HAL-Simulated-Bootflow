#include "acpi_manager.h"
#include <iostream>
#include <thread>
#include <chrono>

void ACPImanager::sleepForSeconds(int seconds) {
    std::cout << "[ACPI] System entering sleep state for " << seconds << " seconds..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

void ACPImanager::wakeUp() {
    std::cout << "[ACPI] Waking up from sleep..." << std::endl;
}

