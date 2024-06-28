#include <stdio.h>
#include <assert.h>
bool isTempOk(float temperature){
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return false;
  }
  return true;
}
bool isSocOk(float soc){
  if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return false;
  }
  return true;
}
bool isChergeRateOk(float chargeRate){
  if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return false;
  }
  return true;
}
int batteryIsOk(float temperature, float soc, float chargeRate) {
   return (isTempOk(temperature) && isSocOk(soc) && isChergeRateOk(chargeRate))?1:0;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
