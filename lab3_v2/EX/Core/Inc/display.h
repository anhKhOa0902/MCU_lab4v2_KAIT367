/*
 * display.h
 *
 *  Created on: Oct 22, 2024
 *     Author: KAI_T367
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_

#include "main.h"
#include "global.h"

extern int index_led;
extern int counterL, counterP;

void display7SEG(int counter);
void update7SEG(int index);

void updateClockBufferMode1();
void updateClockBufferMode2();
void updateClockBufferMode3();
void updateClockBufferMode4();

#endif /* INC_DISPLAY_H_ */
