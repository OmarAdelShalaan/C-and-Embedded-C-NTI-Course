#include "stack.h"

Node* createNode(NodeElementDataType data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Error create Node\n");
        exit(-1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

E_Status_t createStack(struct Stack ** stack, int MaxCapacity)
{
    *stack = (struct Stack*)malloc(sizeof(struct Stack));
    if(*stack == NULL)
    {
        printf("NOT Create Stack\n");
        return ERROR_CREATESTACK;
    }
    (*stack)->Top = -1;
    (*stack)->Capacity = MaxCapacity;
    (*stack)->StackNode = NULL;
    return OK_STACK; 
}
E_Status_t Push(struct Stack * stack, NodeElementDataType data)
{
    if(stack == NULL)
    {
        printf("Push:STACK IS NULL\n");
        return STACK_IS_NULL;
    }
    if(IsFull(stack) == STACK_FULL)
    {
        printf("Push:STACK IS FULL\n");
        return STACK_FULL;
    }
    Node *newNode = createNode(data);
    if(newNode == NULL)
    {
        return ERROR_NOT_ALLOCATE_MEMORY;
    }
    if(stack->StackNode == NULL)
    {
        stack->StackNode = newNode;
    }
    else 
    {
        newNode->next = stack->StackNode;
        stack->StackNode = newNode;
    }
    stack->Top++;
    return OK_STACK;
}
E_Status_t Pop(struct Stack * stack, NodeElementDataType *data)
{
    if(stack == NULL)
    {
        printf("Pop:STACK IS NULL\n");
        return STACK_IS_NULL;
    }
    if(IsEmpty(stack) == STACK_EMPTY)
    {
        printf("Pop:Stack Is Empty\n");
        return STACK_EMPTY;
    }
    else 
    {
        *data = stack->StackNode->data;
        Node * tempStack = stack->StackNode;
        stack->StackNode = stack->StackNode->next;
        free(tempStack);
    } 
    stack->Top--;
    return OK_STACK;
}
E_Status_t IsFull(struct Stack * stack)
{
    if(stack == NULL)
    {
        printf("IsFull: STACK IS NULL\n");
        return STACK_IS_NULL;
    }
    if(stack->Top == stack->Capacity - 1)
    {
        return STACK_FULL;
    }
    return STACK_NOT_FULL;
}
E_Status_t IsEmpty(struct Stack * stack)
{
    if(stack == NULL)
    {
        printf("IsEmpty:STACK IS NULL\n");
        return STACK_IS_NULL;
    }
    if(stack->Top == -1)
    {
        return STACK_EMPTY;
    }
    return STACK_NOT_EMPTY;
}