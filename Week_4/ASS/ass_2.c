#include <stdio.h>

int countOnes(int *arr, int size)
{
    int i;
    int count = 0;
    for( i = 0; i < size; i++)
    {
        if(arr[i] == 1)
            count++;
    }
    return count;
}

int countNegNum(int *arr, int size)
{
    int i;
    int count = 0;
    for( i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            count++;
    }
    return count;
}

int main()
{
    int arr[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Num Of Ones: %d\n",countOnes(arr, 10));
    printf("Num Of Negative: %d\n",countNegNum(arr, 10));
    return 0;
}