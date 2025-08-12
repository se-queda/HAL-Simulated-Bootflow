// boot/bios.h
#pragma once
class BIOS {
public:
    void runPOST();
    void initializeMemory();
    void handOverToUEFI();
};
