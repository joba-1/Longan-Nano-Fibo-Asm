#ifndef POWER_H
#define POWER_H

// Switch off everything (core, registers, clocks, ldo and ram). 
// Wakeup (reset) can be via nreset, RTC, watchdog or wakeup pin
void power_down();

#endif
