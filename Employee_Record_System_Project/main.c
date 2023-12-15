/*
 * main.c
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */

#include "APP.h"

/*
Node * createEmployeeNode(SDataEmployee_t data);
SLinkedList_t* createEmployeeLinkedList();
void AddToEmployeeLinkedList(SLinkedList_t * list, SDataEmployee_t data);
void DeleteFromEmployeeLinkedList(SLinkedList_t * list,int ID);
Node * FindElementFromEmployeeLinkedList(SLinkedList_t * list, int ID);
void DisplayEmployeeLinkedList(SLinkedList_t * list);
 */
int main()
{ /*
	 SLinkedList_t * list = createEmployeeLinkedList();
	 SDataEmployee_t data={"omar",25,2500,"emp",11};
	 AddToEmployeeLinkedList(list, data);
	 DisplayEmployeeLinkedList(list);
	 */
	APP_Init();
	APP_Start();
	return 0;
}
