// boot/uefi.cpp
#include "uefi.h"
#include "bootloader.h"
#include <iostream>
#include <thread>
#include <chrono>

void UEFI::verifySecureBoot() {
    std::cout << "[UEFI] Verifying Secure Boot status..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(800));
    std::cout << "[UEFI] Secure Boot ENABLED." << std::endl;
}

void UEFI::mountBootDevice() {
    std::cout << "[UEFI] Mounting bootable device (eMMC/SD/NVMe)..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "[UEFI] Boot device mounted successfully." << std::endl;
}

void UEFI::loadBootloader() {
    std::cout << "[UEFI] Loading Bootloader into memory..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(700));
    
    Bootloader bl;
    bl.jumpToKernel();
}
