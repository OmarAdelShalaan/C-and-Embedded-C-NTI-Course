#include <stdio.h>

int main() {
    int  count = 0;
    unsigned int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    while(num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("Count of Num Digits = %d", count);
    
    return 0;
}