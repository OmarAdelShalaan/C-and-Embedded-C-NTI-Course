/*
 * LinkedList.h
 *
 *  Created on: Dec 14, 2023
 *      Author: Omar
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "DataEmployee.h"



typedef struct Node
{
	SDataEmployee_t data;
	struct Node * next;
}Node;

typedef struct
{
	struct Node * head;
}SLinkedList_t;


SLinkedList_t* createEmployeeLinkedList();
void deleteEmployeeLinkedList(SLinkedList_t *list);
Node * createEmployeeNode(SDataEmployee_t data);
void AddToEmployeeLinkedList(SLinkedList_t * list, SDataEmployee_t data);
void DeleteFromEmployeeLinkedList(SLinkedList_t * list,int ID);
Node * FindElementFromEmployeeLinkedList(SLinkedList_t * list, int ID);
void DisplayEmployeeLinkedList(SLinkedList_t * list);
int FindIDEmployeeLinkedList(SLinkedList_t * list, int id);



#endif /* LINKEDLIST_H_ */
