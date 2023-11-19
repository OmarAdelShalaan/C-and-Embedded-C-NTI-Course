#include <stdio.h>

int main() {
    int num, abs;
    printf("enter num: ");
    scanf("%d",&num);
    
    if (num >= 51)
    {
        printf("triple absolute: %d\n", 3 * (num - 51));
    }
    else 
    {
        printf("absolute = %d\n", (51 - num));
    }

    return 0;
}
