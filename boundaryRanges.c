#include <stdio.h>
#include <assert.h>
#include "boundaryRanges.h"

void print_condition(const char* parameter_name, const char* condition) {
    printf("The condition for %s : %s.\n", parameter_name, condition);
}

int is_within_range(int value, BoundaryRange range) {
    return value >= range.lower_bound && value <= range.upper_bound;
}

const char* get_condition(const char* parameter_name, int value, BoundaryRange ranges[], int num_ranges) {
    for (int i = 0; i < num_ranges; i++) {
        if (is_within_range(value, ranges[i])) {
            print_condition(parameter_name, ranges[i].condition);
            return ranges[i].isValueValid;
        }
    }
    return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  return    get_condition("SOC", soc, soc_ranges, NUM_SOC_RANGES) &&
            get_condition("Temperature", temperature, temp_ranges, NUM_TEMP_RANGES) &&
            get_condition("Charge rate", chargeRate, charge_rate_ranges, NUM_CHARGE_RATE_RANGES);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  assert(!batteryIsOk(25, 18, 0));
  assert(!batteryIsOk(25, 25, 1));
}
