#include <stdio.h>

int main()
{
    int i;
    int arr[10];
    for(i = 0; i < 10; i++)
    {
        printf("Enter Num %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}