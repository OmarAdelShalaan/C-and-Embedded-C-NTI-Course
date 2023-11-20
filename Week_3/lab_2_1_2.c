#include <stdio.h>

int main()
{
    int i;
    int arr[10];
    int max, min;
    for(i = 0; i < 10; i++)
    {
        printf("Enter Num %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 0; i < 10; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max is %d and Min is %d",max, min);
    printf("\n");
    
    return 0;
}