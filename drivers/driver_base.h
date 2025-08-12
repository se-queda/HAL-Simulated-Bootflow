#pragma once

class DeviceDriver {
public:
    virtual void load() = 0;
    virtual void unload() = 0;
    virtual ~DeviceDriver() {}
};
