#include <stdio.h>

int main() {
     int num;
    printf("enter num: ");
    scanf("%d",&num);
    
    if ((num % 3 == 0) && (num % 7 == 0))
    {
        printf("agree / 3 and /7");
    }
    else if(num % 3 == 0)
    {
        printf("agree / 3");
    }
    else if(num % 7 == 0)
    {
        printf("agree / 7");
    }

    return 0;
}
