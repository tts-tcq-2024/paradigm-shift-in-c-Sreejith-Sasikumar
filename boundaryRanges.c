#include <stdio.h>
#include <assert.h>
#include "boundaryRanges.h"

void print_message_console(const char* parameter_name, const char* message) {
    printf("The Message  for %s : %s.\n", parameter_name, message);
}

int is_within_range(int value, BoundaryRange range) {
    return value >= range.lower_bound && value <= range.upper_bound;
}

int evaluate_parameter(const char* parameter_name, int value, BoundaryRange ranges[], int num_ranges) {
    for (int i = 0; i < num_ranges; i++) {
        if (is_within_range(value, ranges[i])) {
            print_message_console(parameter_name, ranges[i].message);
            return ranges[i].isValueValid;
        }
    }
    return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  return    evaluate_parameter("SOC", soc, soc_ranges, SOC_RANGES_LIMIT) &&
            evaluate_parameter("Temperature", temperature, temp_ranges, TEMP_RANGES_LIMIT) &&
            evaluate_parameter("Charge rate", chargeRate, charge_rate_ranges, CHARGE_RATE_LIMIT);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  assert(!batteryIsOk(25, 18, 0));
  assert(!batteryIsOk(25, 25, 1));
}
