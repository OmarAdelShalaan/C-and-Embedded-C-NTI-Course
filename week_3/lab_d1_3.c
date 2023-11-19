#include <stdio.h>
long nFact(int num);
float sumSeries(n)
{
    float sum = 0;
    int i;
    for(i = 1; i <= n; i++)
    {
        sum += (1.0)/nFact(i - 1);
    }
    return sum;
}
int main()
{
    int x;
    printf("Enter the Number: ");
    scanf("%d", &x);
    printf("The Factorial is = %.2f", sumSeries(x));

    return 0;
}

long nFact(int num)
{
    int j;
    long fact = 1;

    for (j = 1; j <= num; j++)
    {
        fact *= j;
    }
    return fact;
}

