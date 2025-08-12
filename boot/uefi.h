// boot/uefi.h
#pragma once

class UEFI {
public:
    void verifySecureBoot();
    void mountBootDevice();
    void loadBootloader();
};

