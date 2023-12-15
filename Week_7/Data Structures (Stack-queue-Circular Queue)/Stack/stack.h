#ifndef _STACK_H_
#define _STACK_H_

#include <stdio.h>
#include <stdlib.h>

#define NodeElementDataType char

typedef struct Node
{
    NodeElementDataType data;
    struct Node * next;
}Node;

struct Stack
{
    int Top;
    int Capacity;
    Node *StackNode;
};

typedef enum{
    OK_STACK,
    ERROR_NOT_ALLOCATE_MEMORY,
    ERROR_CREATESTACK,
    STACK_FULL,
    STACK_NOT_FULL,
    STACK_EMPTY,
    STACK_NOT_EMPTY,
    STACK_IS_NULL,
}E_Status_t;

E_Status_t createStack(struct Stack ** stack, int MaxCapacity);
E_Status_t Push(struct Stack * stack, NodeElementDataType data);
E_Status_t Pop(struct Stack * stack, NodeElementDataType *data);
E_Status_t IsFull(struct Stack * stack);
E_Status_t IsEmpty(struct Stack * stack);

#endif