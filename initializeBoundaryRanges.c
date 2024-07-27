#include "boundaryRanges.h"

BoundaryRange soc_ranges[NUM_SOC_RANGES] = {
    {0, 20, "LOW_SOC_BREACH", 0},
    {21, 24, "LOW_SOC_WARNING", 0},
    {25, 75, "NORMAL", 1},
    {76, 80, "HIGH_SOC_WARNING", 0},
    {81, 100, "HIGH_SOC_BREACH", 0}
};

BoundaryRange temp_ranges[NUM_TEMP_RANGES] = {
    {-40, 0, "TEMP_TOO_LOW", 0},
    {1, 2.25, "LOW_TEMP_WARNING", 0},
    {2.26, 42.74, "NORMAL_TEMP", 1},
    {42.75, 45, "HIGH_TEMP_WARNING", 0},
    {46, 60, "TEMP_TOO_HIGH", 0}
};

BoundaryRange charge_rate_ranges[NUM_CHARGE_RATE_RANGES] = {
    {0, 0.76, "NORMAL_CHARGE_RATE", 1},
    {0.77, 0.8, "HIGH_CHARGE_RATE_WARNING", 0},
    {0.81, 1, "OVER_CHARGE_RATE_BREACH", 0}
};
