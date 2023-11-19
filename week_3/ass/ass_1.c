#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 1,n;
    printf("Enter your Num: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if( n % i == 0)
        {
            sum += i;
            //printf("%d\n",i);
        }
    }
    if(sum == n)
    {
        printf("Perfect Num");
    }
    else
    {
        printf("Not Perfect Num");
    }
 
    return 0;
}

