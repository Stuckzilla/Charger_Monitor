#include "Timer.h"

configuration ChargerMonitorC
{
	provides interface Notify<uint8_t>;
}
implementation
{
  components ChargerMonitorP, AtmegaExtInterruptC, AtmegaGeneralIOC, MainC, LedsC, new TimerMilliC();
  ChargerMonitorP.Timer -> TimerMilliC;
  ChargerMonitorP.Leds -> LedsC;
  ChargerMonitorP.PG -> AtmegaGeneralIOC.PortD2;
  ChargerMonitorP.STAT1 -> AtmegaGeneralIOC.PortD5;
  ChargerMonitorP.STAT2 -> AtmegaGeneralIOC.PortD6;
  Notify = ChargerMonitorP.Notify;
  
  components new RobustSwitchToggleC(), new TimerMilliC() as IntTimerC;
  RobustSwitchToggleC.GpioInterrupt -> AtmegaExtInterruptC.GpioInterrupt[2];
  RobustSwitchToggleC.GeneralIO-> AtmegaGeneralIOC.PortD2; 
  MainC.SoftwareInit -> RobustSwitchToggleC.Init;
  RobustSwitchToggleC.Timer -> IntTimerC;
  
  ChargerMonitorP.PGNotify -> RobustSwitchToggleC;
}


