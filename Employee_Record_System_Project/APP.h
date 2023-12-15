/*
 * APP.h
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */

#ifndef APP_H_
#define APP_H_


#include "LinkedList.h"
#include "DataEmployee.h"

typedef enum
{
	Add = 1,
	Delete,
	Modify,
	ViewEMP,
	ViewALL,
	Exit
}EChoose_t;
void MonitorDisplay();
void APP_Init();
void APP_Start();

void TakeEmployeeInfo(SDataEmployee_t *data);
void DisplayEmployeeInfo(SDataEmployee_t *data);
void ModifyEmployeeInfo(SDataEmployee_t *data);


#endif /* APP_H_ */
