#include <stdio.h>

int main()
{
    int i, count = 0;
    int arr[10];
    for(i = 0; i < 10; i++)
    {
        printf("Enter Num %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
    }
    printf("Count of One is %d\n", count);
    
    return 0;
}