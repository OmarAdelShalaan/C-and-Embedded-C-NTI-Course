#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,size, count = 0;
    int arr[100];
    printf("Enter size of array: ");
    scanf("%d", &size);
    for(i = 0; i < size; i++)
    {
        printf("Enter num%d: ", i + 1);
        scanf("%d",&arr[i]);
    }
     for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("count a total number of duplicate elements in an array: %d\n\n", count);
    return 0;
}

