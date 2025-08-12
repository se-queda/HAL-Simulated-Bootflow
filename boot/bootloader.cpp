#include "bootloader.h"
#include <iostream>
#include <thread>
#include <chrono>

void Bootloader::jumpToKernel() {
    std::cout << "[BOOTLOADER] Transferring control to OS Kernel..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    std::cout << "[BOOTLOADER] Executing kernel at 0x800000..." << std::endl;
}

