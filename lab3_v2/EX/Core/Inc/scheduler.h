/*
 * scheduler.h
 *
 *  Created on: Nov 19, 2024
 *      Author: KAI_T367
 */
#include "main.h"
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>
typedef struct {
	void (*pTask)(void);
	uint32_t Delay; //seem software_timer
	uint32_t Period; // seem counter, Task period (0 for one-shot tasks)
	uint32_t RunMe; // = timer_flag, Number of times the task is ready to run
	uint32_t TaskID;  //Unique ID for the task

} sTask;

#define SCH_MAX_TASKS	40
#define NO_TASK_ID 		0

extern sTask SCH_task_G[SCH_MAX_TASKS];


void SCH_init(void); //Initializes the scheduler by clearing all tasks and resetting the task index
void SCH_Update(void);
void SCH_Add_Task(void (*pFunction)(void), unsigned int DELAY, unsigned int PERIOD); //giống việc set timer
void SCH_Dispatch_Tasks(void); //check timer_flag



#endif /* INC_SCHEDULER_H_ */
