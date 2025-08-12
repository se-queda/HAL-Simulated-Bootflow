// boot/bios.cpp
#include "bios.h"
#include <iostream>
#include <thread>
#include <chrono>

void BIOS::runPOST() {
    std::cout << "[BIOS] Running Power-On Self-Test (POST)..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "[BIOS] All hardware passed." << std::endl;
}

void BIOS::initializeMemory() {
    std::cout << "[BIOS] Initializing memory and CPU cache..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "[BIOS] Memory OK." << std::endl;
}

void BIOS::handOverToUEFI() {
    std::cout << "[BIOS] Handing over control to UEFI..." << std::endl;
}
