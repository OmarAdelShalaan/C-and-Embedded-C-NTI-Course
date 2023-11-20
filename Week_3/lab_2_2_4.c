#include <stdio.h>

int main()
{
    int i, j;
    int arr1[3][4];
    int arr2[3][4];
    printf("Array 1\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("Enter Num [%d][%d]: ", i, j);
        scanf("%d", &arr1[i][j]);
        }
    }
    printf("Array 2\n");
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
        printf("Enter Num [%d][%d]: ", i, j);
        scanf("%d", &arr2[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(arr1[i][j] != arr2[i][j])
            {
                printf("Two Matrices are Not Equal\n\n");
                return -1;
            }
        }
        
    }
    printf("Two Matrices are Equal\n\n");
    
    return 0;
}