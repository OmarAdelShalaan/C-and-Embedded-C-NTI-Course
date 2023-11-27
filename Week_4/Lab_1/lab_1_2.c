#include <stdio.h>

float cul(int *arr, int size, int *max, int * min)
{
    int i;
    int sum = 0;
    *max = arr[0];
    *min = arr[0];
    for(i = 0; i < size; i++)
    {
        if(*max < arr[i])
            *max = arr[i];
        if(*min > arr[i])
            *min = arr[i];
        sum += arr[i];
    }
    return (sum * 1.0)/size;
} 
int main()
{
    int max, min;
    int i;
    int arr[10];
    for(i = 0; i < 10; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d",&arr[i]);
    }
    printf("Avr Value: %.2f\n", cul(arr, 10, &max, &min));
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}