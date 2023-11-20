#include <stdio.h>

int EvenOddNum(int num)
{
    return num % 2 == 0? 1: 0;
}
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("boolen is 1 for even 0 for odd : %d", EvenOddNum(num));

    return 0;
}
