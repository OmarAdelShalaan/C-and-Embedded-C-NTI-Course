#include <stdio.h>
#include <stdlib.h>
#include "cal.h"

float div(float a, float b);
int main()
{
    printf("add: %d\n",add(5,6));
    printf("sub: %d\n",sub(5,6));
    printf("mul: %d\n",mul(5,6));
    printf("div: %d\n",div(6,5));
    return 0;
}

float div(float a, float b)
{
    return a/b;
}
