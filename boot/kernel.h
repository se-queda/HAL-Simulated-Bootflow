// boot/kernel.h
#pragma once

class Kernel {
public:
    void boot();
    void loadDrivers();
    void handOverToACPI();
};

