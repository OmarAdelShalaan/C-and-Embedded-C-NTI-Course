#include <stdio.h>

int main()
{
    int i;
    int arr[100];
    int n;
    printf("Enter Num of Arr Value: ");
    scanf("%d", &n);
    while(n < 0 || n > 100)
    {
        printf("Enter Num of Arr Value: ");
        scanf("%d", &n);
    }
    for(i = 0; i < n; i++)
    {
        printf("Enter Num %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i = n - 1; i >= 0; i--)
    {
        
        printf("%d\t", arr[i]);
        
    }
    printf("\n");
    
    return 0;
}