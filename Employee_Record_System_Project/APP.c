/*
 * APP.c
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */
#include "LinkedList.h"
#include "DataEmployee.h"
#include "APP.h"
#include <string.h>
//-------------------------------------------------------------------//
void chooseOption(EChoose_t choose);
int GetEmployeeID();
//-------------------------------------------------------------------//
SLinkedList_t *list = NULL;
//-------------------------------------------------------------------//
void MonitorDisplay()
{
	printf("----------------------------------------------------------\n");
	printf("1.Add a new employee data.\n");
	printf("2.Delete the data of an employee.\n");
	printf("3.Modify the data of an employee.\n");
	printf("4.View the data of an employee.\n");
	printf("5.View all the employee's data.\n");
	printf("6.Exit.\n");
	printf("Choose Your Option Number: ");
}
void APP_Init()
{
	list = createEmployeeLinkedList();
}
void APP_Start()
{
	int choose = 0;
	while (1)
	{
		MonitorDisplay();
		fflush(stdin);
		scanf("%d", &choose);
		chooseOption(choose);
	}
}
void chooseOption(EChoose_t choose)
{
	SDataEmployee_t data;
	Node *Ptrdata = NULL;
	switch (choose)
	{
	case Add:
		TakeEmployeeInfo(&data);
		AddToEmployeeLinkedList(list, data);
		break;
	case Delete:
		data.ID = GetEmployeeID();
		DeleteFromEmployeeLinkedList(list, data.ID);
		break;
	case Modify:
		data.ID = GetEmployeeID();
		Ptrdata = FindElementFromEmployeeLinkedList(list, data.ID);
		if (Ptrdata != NULL)
		{
			ModifyEmployeeInfo(&Ptrdata->data);
		}
		else
		{
			printf("This ID Not Found\n");
		}
		break;
	case ViewEMP:
		data.ID = GetEmployeeID();
		Ptrdata = FindElementFromEmployeeLinkedList(list, data.ID);
		if (Ptrdata != NULL)
		{
			DisplayEmployeeInfo(&Ptrdata->data);
		}
		else
		{
			printf("This ID Not Found\n");
		}
		break;
	case ViewALL:
		DisplayEmployeeLinkedList(list);
		break;
	case Exit:
		// delete list
		printf("Exit\n");
		exit(1);
		break;
	}
}
void TakeEmployeeInfo(SDataEmployee_t *data)
{
	printf("*************************************************\n");
	printf("Enter Your Name: ");
	fflush(stdin);
	gets(data->name);
	printf("Enter Your age: ");
	fflush(stdin);
	scanf("%d", &data->age);
	printf("Enter Your Salary: ");
	fflush(stdin);
	scanf("%f", &data->salary);
	printf("Enter Your title: ");
	fflush(stdin);
	gets(data->title);
	printf("Enter Your ID: ");
	fflush(stdin);
	scanf("%d", &data->ID);
	printf("*************************************************\n");
}
void DisplayEmployeeInfo(SDataEmployee_t *data)
{
	printf("*************************************************\n");
	printf("Name: %s\n", data->name);
	printf("age: %d\n", data->age);
	printf("Enter Your Salary: %f\n", data->salary);
	printf("Enter Your title: %s\n", data->title);
	printf("Enter Your ID: %d\n", data->ID);
	printf("*************************************************\n");
}
int GetEmployeeID()
{
	int id;
	printf("Enter Your ID: ");
	fflush(stdin);
	scanf("%d", &id);
	return id;
}
void ModifyEmployeeInfo(SDataEmployee_t *data)
{
	TakeEmployeeInfo(data);
}