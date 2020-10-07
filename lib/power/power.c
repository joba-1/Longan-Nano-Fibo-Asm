#include <gd32vf103_pmu.h>

void power_down() {
  pmu_to_standbymode(WFI_CMD);
}