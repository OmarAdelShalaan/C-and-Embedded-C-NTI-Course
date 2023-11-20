#include <stdio.h>

void printFIZZ_BUZZ(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FIZZBUZZ\n");
        }
        else if (i % 3 == 0)
        {
            printf("FIZZ\n");
        }
        else if ((i % 5 == 0))
        {
            printf("BUZZ\n");
        }
    }
}
int main()
{
    int n;
    printf("Enter your num: ");
    scanf("%d", &n);
    printFIZZ_BUZZ(n);
    return 0;
}