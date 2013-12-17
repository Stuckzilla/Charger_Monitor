#include "Timer.h"

module ChargerMonitorP {
	uses {
		interface Leds;
		interface Timer<TMilli>;
		//    interface GpioInterrupt; 

		//interface Read<uint8_t>;
		interface GeneralIO as PG;
		interface GeneralIO as STAT1;
		interface GeneralIO as STAT2;

		interface Notify<bool> as PGNotify;

	}
	provides interface Notify<uint8_t>;
}
implementation {
	#define SAMPLING_FREQUENCY 250
	uint8_t pg = 0;
	uint8_t stat1 = 0;
	uint8_t stat2 = 0;
	uint8_t combinedvar = 0;
	uint8_t oldbin = -1;
	bool pinHigh;
	
	
	void checkLeds()
	{
		//  call Read.read();
		//} 

		//event void Read.readDone(error_t result, uint8_t data) 
		//{ 

		if(call PG.get() == FALSE) {
			//call Leds.led0On();
			pg = 1;
		} else {
			//call Leds.led0Off();
			pg = 0;
		}
		
		if(call STAT1.get() == FALSE) {
			//call Leds.led1On();
			stat1 = 1;
		} else {
			//call Leds.led1Off();
			stat1 = 0;
		}
		
		if(call STAT2.get() == FALSE) {
			//call Leds.led2On();
			stat2 = 1;
		} else {
			//call Leds.led2Off();
			stat2 = 0;
		}

		if(pg == 0) {
			//All off
			combinedvar = 0;
		} else if(pg == 1 && stat1 == 1) {
			//YellowOn
			combinedvar = 2;
		} else if (pg == 1 && stat2 == 1){
			//GreenOn
			combinedvar = 4;
		} else {
			//RedOn
			combinedvar = 1;
		}						

		if(oldbin != combinedvar) {
			signal Notify.notify(combinedvar);
			oldbin = combinedvar;
			combinedvar = 0;
		}
		else {
		}
		//call Leds.led0Toggle();
	}

	event void Timer.fired() {
		checkLeds();
	}

	task void timerstart() {
		call Timer.startPeriodic(SAMPLING_FREQUENCY);
	}

	task void timerstop() {
		call Timer.stop();
	}

	event void PGNotify.notify(bool m_pinHigh) {

		pinHigh = m_pinHigh;
		
		//checkLeds();

		if(pinHigh == FALSE) {
			post timerstart();
		} else {
			post timerstop();
		}
	}

	command error_t Notify.enable() {
		call PG.makeInput();
		call STAT1.makeInput();
		call STAT2.makeInput();

		//  	call Timer.startPeriodic(SAMPLING_FREQUENCY); 

		call PGNotify.enable();

		return SUCCESS;
	}

	command error_t Notify.disable() {
		call Timer.stop();
		call PGNotify.disable();
		return SUCCESS;

	}
}