#include <stdio.h>

int main() {
    int num1, num2;
    int des1= 0,des2 = 0;
    printf("Enter Num1: ");
    scanf("%d",&num1);
    printf("Enter Num2: ");
    scanf("%d",&num2);
    des1= (num1 > 100)? num1 - 100: 100 - num1; 
    des2= (num2 > 100)? num2 - 100: 100 - num2;
    if(des1 > des2 )
    {
        printf("Num2 is the nearest");
    }
    else if(des1 < des2 )
    {
        printf("Num1 is the nearest");
    }
    else 
    {
        printf("equal des");
    }
    return 0;
}