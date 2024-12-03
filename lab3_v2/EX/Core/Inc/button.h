/*
 * button.h
 *
 *  Created on: Oct 22, 2024
 *      Author: LAPTOP
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_


#include "main.h"
#include "software_timer.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define NUM_OF_BUTTONS 3			// Number of Buttons to use

int isButtonPressed(int index);

void getKeyInput();

#endif /* INC_BUTTON_H_ */
