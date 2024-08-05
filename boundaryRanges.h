#ifndef BOUNDARY_RANGES_H
#define BOUNDARY_RANGES_H

typedef struct {
    float lower_bound;
    float upper_bound;
    const char* message;
    int isValueValid;
} BoundaryRange;

extern BoundaryRange soc_ranges[];
extern BoundaryRange temp_ranges[];
extern BoundaryRange charge_rate_ranges[];

extern int SOC_RANGES_LIMIT;
extern int TEMP_RANGES_LIMIT;
extern int CHARGE_RATE_LIMIT;

#endif
