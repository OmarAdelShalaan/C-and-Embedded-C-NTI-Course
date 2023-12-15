/*
 * LinkedList.c
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */

#include "LinkedList.h"
#include "DataEmployee.h"

Node * createEmployeeNode(SDataEmployee_t data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	if(newNode == NULL)
	{
		printf("Not Allocated Node\n");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
SLinkedList_t* createEmployeeLinkedList()
{
	SLinkedList_t * newList = (SLinkedList_t*)malloc(sizeof(SLinkedList_t));
	if(newList == NULL)
	{
		printf("Not Allocated List\n");
		exit(2);
	}
	newList->head = NULL;
	return newList;
}
void AddToEmployeeLinkedList(SLinkedList_t * list, SDataEmployee_t data)
{
	if(FindIDEmployeeLinkedList(list, data.ID))
	{
		printf("The ID is Found\n");
		return;
	}
	Node* newNode = createEmployeeNode(data);
	if(list == NULL)
	{
		printf("AddToLinkedList: List is NULL\n");
		return;
	}
	if(list->head == NULL)
	{
		list->head = newNode;
	}
	else
	{
		newNode->next = list->head;
		list->head = newNode;
	}
}
void DeleteFromEmployeeLinkedList(SLinkedList_t * list, int ID )
{
	Node * tempNode = list->head;
	while(tempNode->next != NULL)
	{
		if(tempNode->next->data.ID == ID)
		{
			Node* FreeNode = tempNode->next;
			tempNode->next = tempNode->next->next;
			free(FreeNode);
			return;
		}
		tempNode = tempNode->next;
	}
}
Node * FindElementFromEmployeeLinkedList(SLinkedList_t * list, int ID)
{
	Node * tempNode = list->head;
	while(tempNode != NULL)
	{
		if(tempNode->data.ID == ID)
		{
			return tempNode;
		}
		tempNode = tempNode->next;
	}
	return NULL;
}
void DisplayEmployeeLinkedList(SLinkedList_t * list)
{
	Node * tempNode = list->head;
	while(tempNode != NULL)
	{
		printf("*************************************************\n");
		printf("Employee Name: %s\n", 		tempNode->data.name);
		printf("Employee age: %d\n", 		tempNode->data.age);
		printf("Employee salary: %.2f\n",	tempNode->data.salary);
		printf("Employee title: %s\n", 		tempNode->data.title);
		printf("Employee ID: %d\n", 		tempNode->data.ID);
		printf("*************************************************\n");
		tempNode = tempNode->next;
	}
}
int FindIDEmployeeLinkedList(SLinkedList_t * list, int id)
{
	Node * tempNode = list->head;
	while(tempNode != NULL)
	{
		if(tempNode->data.ID == id)
		{
			return 1;
		}
		tempNode = tempNode->next;
	}
	return 0;
}





































