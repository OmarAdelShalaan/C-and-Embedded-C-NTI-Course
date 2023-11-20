#include <stdio.h>

int main()
{
    int i, j;
    int arr[3][4];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("Enter Num [%d][%d]: ", i, j);
        scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}