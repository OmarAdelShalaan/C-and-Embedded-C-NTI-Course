#include <stdio.h>

int main() {
    int  i,j;
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= num + 1 - i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}