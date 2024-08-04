#include "boundaryRanges.h"
BoundaryRange soc_ranges[];
BoundaryRange temp_ranges[];
BoundaryRange charge_rate_ranges[];

/* 
  Switch to enable/ disable the warnings
  TRUE: Enables warnings in soc_ranges, temp_ranges and charge_rate_ranges
  FALSE: Disable warnings in soc_ranges, temp_ranges and charge_rate_ranges (suppresses warnings if customers don't need early warnings)
*/
#define WARNINGS_SWITCH TRUE
