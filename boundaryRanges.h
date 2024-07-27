typedef struct {
    float lower_bound;
    float upper_bound;
    const char* condition;
} BoundaryRange;

#define NUM_SOC_RANGES 5
#define NUM_TEMP_RANGES 5
#define NUM_CHARGE_RATE_RANGES 3
