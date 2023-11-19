#include <stdio.h>

int main() {
    int  i,j,count = 1;
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <=  (i) ; j++)
        {
            printf("%d ",count++);
        }
        printf("\n");

    }
    return 0;
}