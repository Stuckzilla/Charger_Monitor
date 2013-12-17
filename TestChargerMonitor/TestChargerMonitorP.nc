#include "TestCase.h"
#include "Timer.h"

module TestChargerMonitorP{
	provides {
		/* for MUT */
		interface Leds;
		interface Timer<TMilli>;
		interface GeneralIO as PG;
		interface GeneralIO as STAT1;
		interface GeneralIO as STAT2;
		interface Notify<bool> as BoolNotify;
	}
	uses {
		interface TestCase as ChargingLedOn;
		interface TestCase as DoneChargingLedOn;
		interface TestCase as ErrorLedOn;
		interface TestCase as LedsOff;
		interface TestCase as DidNotStartCharge;
		interface TestCase as NotifyNotCalled;
		interface TestCase as PGNotifySetTrue;
		interface TestCase as PGNotifySetFalse;
		interface Timer<TMilli> as TestTimer;
		
		/* from MUT */
		interface Notify<uint8_t>;
	}
}
implementation{
	
int testcase;
int shouldBeOff = 0;


	void go(uint8_t testNum){
		testcase = testNum;
		
		//signal Timer.fired();
		signal BoolNotify.notify(FALSE);
	}
	
	event void ChargingLedOn.run() {
		go(0);
	}
	
	event void DoneChargingLedOn.run() {
		go(1);
	}
	
	event void ErrorLedOn.run() {
		go(2);
		
	}
	
	event void LedsOff.run() {
		testcase = 3;
		for (shouldBeOff; shouldBeOff < 4; shouldBeOff++)
		{
			//signal Timer.fired();
			call Timer.startPeriodic(250);
		}
		call LedsOff.done();
	}
	
	event void DidNotStartCharge.run() {
		go(4);
	}
	
	event void NotifyNotCalled.run() {
		testcase = 5;
		call TestTimer.startOneShot(2000);
	}
	
	event void PGNotifySetTrue.run() {
		//assertSuccess();
		//call PGNotifySetTrue.done();
		testcase = 6;
		signal BoolNotify.notify(TRUE);
	}
	
	event void PGNotifySetFalse.run() {
		testcase = 7;
		signal BoolNotify.notify(FALSE);
	}
	
	
	event void Notify.notify(uint8_t val){
		
		if (testcase == 0) {
			assertEquals("Green LED should have been on..", 4, val);
			call ChargingLedOn.done();
		} else if (testcase == 1) {
			assertEquals("Yellow LED should have been on..", 2, val);
			call DoneChargingLedOn.done();
		} else if (testcase == 2) {
			assertEquals("Error Light (Red) should have been on..", 1, val);
		    call ErrorLedOn.done();
		} else if (testcase == 3) {
			switch(shouldBeOff) {
				case 0:
					assertEquals("All Lights should have been off..", 0, val);
					break;
				case 1:
					assertNotEquals("All Lights should have been off..", 0, val);
					break;
				case 2:
					assertEquals("All Lights should have been off..", 0, val);
					break;
				case 3:
					assertEquals("All Lights should have been off..", 0, val);
					break;
			}	
		} else if (testcase == 4) {
			assertEquals("Error Light (Red) should have been on", 1, val);
			call DidNotStartCharge.done();
		} else if (testcase == 5) {
			assertFail("Should not have called Notify!");
			call NotifyNotCalled.done();
		} else if (testcase == 6) {
			assertFail("Should not have called Notify!");
			call PGNotifySetTrue.done();
		} else if (testcase == 7) {
			assertSuccess();
			call PGNotifySetFalse.done();
		}
	}
	
	event void TestTimer.fired() {
		
		if (testcase == 5) {
			assertSuccess();
			call NotifyNotCalled.done();
		} else {
		}
	}
	
		
	async command bool PG.get(){
		if ((testcase == 0) | (testcase == 1) | (testcase == 2) | (testcase == 4) | (testcase == 7)) {
			return FALSE;
		} else if (testcase == 3) {
			switch(shouldBeOff) {
				case 0:
					return TRUE;
					break;
				case 1:
					return FALSE;
					break;
				case 2:
					return TRUE;
					break;
				case 3:
					return TRUE;
					break;	
			}
		}
	}
	
	
	async command bool STAT1.get(){
		if (testcase == 0) {
			return TRUE;
		} else if ((testcase == 1) | (testcase == 7)) {
			return FALSE;	
		} else if (testcase == 2) {
			return TRUE;		
		} else if (testcase == 3) {
			switch(shouldBeOff) {
				case 0:
					return TRUE;
					break;
				case 1:
					return FALSE;
					break;
				case 2:
					return TRUE;
					break;
				case 3:
					return FALSE;
					break;
			}
		} else if (testcase == 4) {
			return TRUE;
		}
	}
	
	async command bool STAT2.get(){
		if (testcase == 0) {
			return FALSE;
		} else if ((testcase == 1) | (testcase == 7)) {
			return TRUE;	
		} else if (testcase == 2) {
			return TRUE;		
		} else if (testcase == 3) {
			switch(shouldBeOff) {
				case 0:
					return TRUE;
					break;
				case 1:
					return TRUE;
					break;
				case 2:
					return FALSE;
					break;
				case 3:
					return FALSE;
					break;
			}
		} else if (testcase == 4) {
			return TRUE;
		}
	}
	
//	task void sendPGNotify() {
//		if (testcase == 6) {
//			signal BoolNotify.notify(TRUE);
//			
//		} else if (testcase == 7) {
//			signal BoolNotify.notify(FALSE);
//		}
//	}
	
	command error_t BoolNotify.enable() {
		//post sendPGNotify();
		return SUCCESS;
	}
	
	command error_t BoolNotify.disable() {
		
		return SUCCESS;
	}	
	
	/*
	 * EXTRA LEDS INTERFACE COMMANDS
	 */
	async command void Leds.led0Toggle(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led1On(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led1Off(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led0Off(){
		// TODO Auto-generated method stub
	}

	async command uint8_t Leds.get(){
		return 0;
	}
	async command void Leds.set(uint8_t val){
		// TODO Auto-generated method stub
	}
	async command void Leds.led1Toggle(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led2Off(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led0On(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led2On(){
		// TODO Auto-generated method stub
	}

	async command void Leds.led2Toggle(){
		// TODO Auto-generated method stub
	}

	/*
	 * EXTRA TIMER INTERFACE COMMANDS
	 */
	command uint32_t Timer.gett0(){
		// TODO Auto-generated method stub
		return 0;
	}
	command uint32_t Timer.getNow(){
		// TODO Auto-generated method stub
		return 0;
	}
	command void Timer.stop(){
		if (testcase == 6) {
			assertSuccess();
			call PGNotifySetTrue.done();
		} else if (testcase == 7) {
			assertFail("Should not be stopping the Timer");
			call PGNotifySetFalse.done();
		}
	}
	command void Timer.startPeriodic(uint32_t dt){
		signal Timer.fired();
	}
	command bool Timer.isOneShot(){
		// TODO Auto-generated method stub
		return FALSE;
	}
	command void Timer.startOneShotAt(uint32_t t0, uint32_t dt){
		// TODO Auto-generated method stub
	}
	command void Timer.startOneShot(uint32_t dt){
		// signal Timer.fired();
	}
	command void Timer.startPeriodicAt(uint32_t t0, uint32_t dt){
		// TODO Auto-generated method stub
	}
	command uint32_t Timer.getdt(){
		// TODO Auto-generated method stub
		return 0;
	}
	command bool Timer.isRunning(){
		// TODO Auto-generated method stub
		return FALSE;
	}
	
	


	
	/*
	 * EXTRA PG INTERFACE COMMANDS
	 */

	async command void PG.toggle(){
		// TODO Auto-generated method stub
	}

	

	async command void PG.makeInput(){
		// TODO Auto-generated method stub
	}

	async command bool PG.isInput(){
		return TRUE;
	}

	async command void PG.set(){
		// TODO Auto-generated method stub
	}

	async command void PG.clr(){
		// TODO Auto-generated method stub
	}

	async command void PG.makeOutput(){
		// TODO Auto-generated method stub
	}

	async command bool PG.isOutput(){
		return FALSE;
	}
	
	/*
	 * EXTRA STAT1 INTERFACE COMMANDS
	 */

	async command bool STAT1.isOutput(){
		return FALSE;
	}

	async command void STAT1.makeOutput(){
		// TODO Auto-generated method stub
	}

	async command bool STAT1.isInput(){
		return TRUE;
	}

	async command void STAT1.makeInput(){
		// TODO Auto-generated method stub
	}

	

	async command void STAT1.toggle(){
		// TODO Auto-generated method stub
	}

	async command void STAT1.clr(){
		// TODO Auto-generated method stub
	}

	async command void STAT1.set(){
		// TODO Auto-generated method stub
	}
	
	/*
	 * EXTRA STAT2 INTERFACE COMMANDS
	 */

	async command bool STAT2.isOutput(){
		return FALSE;
	}

	async command void STAT2.makeOutput(){
		// TODO Auto-generated method stub
	}

	

	async command void STAT2.toggle(){
		// TODO Auto-generated method stub
	}

	async command bool STAT2.isInput(){
		return TRUE;
	}

	async command void STAT2.makeInput(){
		// TODO Auto-generated method stub
	}

	async command void STAT2.clr(){
		// TODO Auto-generated method stub
	}

	async command void STAT2.set(){
		// TODO Auto-generated method stub
	}


	
}