#include <stdio.h>

void Fibonacci_series(int n)
{
    int i;
    int pre = 0;
    int next = 1;
    int sum = 0;
    printf("0 1 ");
    for(i = 0; i < (n - 1); i++)
    {
        sum = pre + next;
        printf("%d ", sum);
        pre = next;
        next = sum;
    }
}

int main()
{
    int n;
    fflush(stdin);
    printf("Enter Your Num: ");
    fflush(stdin);
    scanf("%d", &n);
    Fibonacci_series(n);
    return 0;
}