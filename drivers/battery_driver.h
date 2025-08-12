#pragma once
#include "driver_base.h"
#include "../hal/battery_hal.h"

class BatteryDriver : public DeviceDriver {
private:
    BatteryHAL hal;
public:
    void load() override;
    void unload() override;
};
