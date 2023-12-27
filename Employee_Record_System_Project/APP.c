/*
 * APP.c
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */
#include <conio.h>
#include "LinkedList.h"
#include "DataEmployee.h"
#include "APP.h"
#include <string.h>
//-------------------------------------------------------------------//
void chooseOption(EChoose_t choose);
int GetEmployeeID();
//-------------------------------------------------------------------//
SLinkedList_t *list = NULL;
SDataEmployee_t Arrdata[]={
{"Omar Adel"        ,   25  ,  9000   , "Commu Engineer"    	, 4584},
{"Ali Ahmed"        ,   45  ,  14000  , "Head Engineer"        	, 3115},
{"Mohamed Ahmed"    ,   60  ,  30000  , "Manager Engineer"     	, 842},
{"Sarah Johnson"    ,   33  ,  11000  , "Data Analyst"     		, 2654},
{"Daniel Patel"     ,   40  ,  17000  , "Manager"     			, 8193},
{"Emily Miller"     ,   28  ,  9500   , "Embedded Engineer"    	, 3785},
{"Jacob Brown"      ,   50  ,  22000  , "Embedded Head"  		, 5421}
};
//-------------------------------------------------------------------//
int MonitorDisplay()
{
	int choose = 0;
	//getchar();
    //system("clear");
	printf("----------------------------------------------------------\n");
	printf("1.Add a new employee data.\n");
	printf("2.Delete the data of an employee.\n");
	printf("3.Modify the data of an employee.\n");
	printf("4.View the data of an employee.\n");
	printf("5.View all the employee's data.\n");
	printf("6.Exit.\n");
	printf("Choose Your Option Number: ");
	fflush(stdin);
	scanf("%d", &choose);
	//getchar();
    //system("clear");
	return choose;
}
void APP_Init()
{
	list = createEmployeeLinkedList();
	for(int i = 0; i < 7; i++)
	{
		AddToEmployeeLinkedList(list, Arrdata[i]);
	}
}
void APP_Start()
{
	int choose = 0;
	
	while (1)
	{
		choose = MonitorDisplay();
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
		deleteEmployeeLinkedList(list);
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
	printf("Enter Any Char to Continue....");
	fflush(stdin);
	getchar();
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
