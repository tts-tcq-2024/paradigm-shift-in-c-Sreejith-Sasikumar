#ifndef BOUNDARY_RANGES_H
#define BOUNDARY_RANGES_H

typedef struct {
    float lower_bound;
    float upper_bound;
    const char* condition;
    int isValueValid;
} BoundaryRange;

#define NUM_SOC_RANGES 5
#define NUM_TEMP_RANGES 5
#define NUM_CHARGE_RATE_RANGES 3

extern BoundaryRange soc_ranges[];
extern BoundaryRange temp_ranges[];
extern BoundaryRange charge_rate_ranges[];

#endif
