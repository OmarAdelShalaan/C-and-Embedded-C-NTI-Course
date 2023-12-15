#include "stack.h"
/*
E_Status_t createStack(struct Stack * stack, int MaxCapacity);
E_Status_t Push(struct Stack * stack, NodeElementDataType data);
E_Status_t Pop(struct Stack * stack, NodeElementDataType *data);
E_Status_t IsFull(struct Stack * stack);
E_Status_t IsEmpty(struct Stack * stack);
*/
int main()
{
    char data;
    struct Stack *stack = NULL;
    createStack(&stack, 100);

    int i = 0;
    char str[100];
    //scanf("%s", str);
    while (i != 150)
    {

        Push(stack, i);
        i++;
    }
    i = 0;
    while (i != 150)
    {

        Pop(stack, &data);
        printf("Pop: %c\n", data);

        i++;
    }
    return 0;
}