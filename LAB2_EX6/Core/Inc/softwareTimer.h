/*
 * timerSetting.h
 *
 *  Created on: Sep 25, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#define TICK 10

int timer_counter = 0;
int timer_flag = 0;

void setTimer(int duration){
	timer_counter = duration/TICK;
	timer_flag = 0;
}

void timer_run(){
	if (timer_counter > 0) {
		timer_counter--;
		if (timer_counter <= 0) {
			timer_flag = 1;
		}
	}
}

#endif /* INC_SOFTWARETIMER_H_ */
