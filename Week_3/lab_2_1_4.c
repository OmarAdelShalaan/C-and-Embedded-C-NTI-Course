#include <stdio.h>

int main()
{
    int i;
    int arr[10];
    int temparr[10];
    int sum = 0;
    for(i = 0; i < 10; i++)
    {
        printf("Enter Num %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++)
    {
        temparr[i] = arr[i];
    }
    for(i = 0; i < 10; i++)
    {
       printf("%d\t",temparr[i]);
    }
    printf("\n");
    
    return 0;
}