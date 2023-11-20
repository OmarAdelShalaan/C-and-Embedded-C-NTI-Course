#include <stdio.h>

int main()
{
    int i, j;
    int max, min;
    int arr[3][4];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("Enter Num [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
    }
    max = arr[0][0];
    min = arr[0][0];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        
    }
    printf("Max is %d and Min is %d",max, min);
    printf("\n");
    return 0;
}