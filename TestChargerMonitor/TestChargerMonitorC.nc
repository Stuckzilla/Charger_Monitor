configuration TestChargerMonitorC{
}
implementation {
	components new TimerMilliC() as TestTimerC;
	components new TestCaseC() as ChargingLedOnC;
	components new TestCaseC() as DoneChargingLedOnC;
	components new TestCaseC() as ErrorLedOnC;
	components new TestCaseC() as LedsOffC;
	components new TestCaseC() as DidNotStartChargeC;
	components new TestCaseC() as NotifyNotCalledC;
	components new TestCaseC() as PGNotifySetTrueC;
	components new TestCaseC() as PGNotifySetFalseC;


	
	/* MODULE UNDER TEST */
	components ChargerMonitorP as MUT;
	
	/* MUT provides */
	Test.Notify -> MUT.Notify;
	
	/* MUT uses */
	MUT.Leds -> Test.Leds;
	MUT.Timer -> Test.Timer;
	MUT.PG -> Test.PG;
	MUT.STAT1 -> Test.STAT1;
	MUT.STAT2 -> Test.STAT2;
	MUT.PGNotify -> Test.BoolNotify;


	components TestChargerMonitorP as Test;

	Test.ChargingLedOn -> ChargingLedOnC;
	Test.DoneChargingLedOn -> DoneChargingLedOnC;
	Test.ErrorLedOn -> ErrorLedOnC;
	Test.LedsOff -> LedsOffC;
	Test.DidNotStartCharge -> DidNotStartChargeC;
	Test.NotifyNotCalled -> NotifyNotCalledC;
	Test.PGNotifySetTrue -> PGNotifySetTrueC;
	Test.PGNotifySetFalse -> PGNotifySetFalseC;
	
	
	Test.TestTimer -> TestTimerC;
 
}