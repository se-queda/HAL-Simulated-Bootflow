#pragma once
#include "driver_base.h"
#include "../hal/keyboard_hal.h"

class KeyboardDriver : public DeviceDriver {
private:
    KeyboardHAL hal;
public:
    void load() override;
    void unload() override;
};
