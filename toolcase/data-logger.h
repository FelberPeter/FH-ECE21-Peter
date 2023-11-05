#pragma once
#include <sink-logger.h>
#include <sensor-config.h>

class DataLogger
{
public:
    DataLogger(SensorConfig* sensors, SinkLogger* sink, uint16_t interval);

    void startLogging();

private:
    SinkLogger* _sink;
    SensorConfig* _sensors;
    uint16_t _interval;
};