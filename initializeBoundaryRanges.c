#include "boundaryRanges.h"

BoundaryRange soc_ranges[NUM_SOC_RANGES] = {
    {0, 20, "LOW_SOC_BREACH"},
    {21, 24, "LOW_SOC_WARNING"},
    {25, 75, "NORMAL"},
    {76, 80, "HIGH_SOC_WARNING"},
    {81, 100, "HIGH_SOC_BREACH"}
};

BoundaryRange temp_ranges[NUM_TEMP_RANGES] = {
    {-40, 0, "TEMP_TOO_LOW"},
    {1, 2.25, "LOW_TEMP_WARNING"},
    {2.26, 42.74, "NORMAL_TEMP"},
    {42.75, 45, "HIGH_TEMP_WARNING"},
    {46, 60, "TEMP_TOO_HIGH"}
};

BoundaryRange charge_rate_ranges[NUM_CHARGE_RATE_RANGES] = {
    {0, 0.76, "NORMAL_CHARGE_RATE"},
    {0.77, 0.8, "HIGH_CHARGE_RATE_WARNING"},
    {0.81, 1, "OVER_CHARGE_RATE_BREACH"}
};
