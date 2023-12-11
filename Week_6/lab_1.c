#include <stdio.h>

typedef enum{sum, sub, mul, div}operation;
int Sum(int num1, int num2){return num1 + num2;}
int Sub(int num1, int num2){return num1 - num2;}
int Mul(int num1, int num2){return num1 * num2;}
int Div(int num1, int num2){return num1 / num2;}
int main()
{
    int num1, num2;
    operation opt;
    int (*ptr[4])(int, int)={Sum, Sub, Mul, Div};
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Choose Operation\n");
    printf("Enter num\nSum : 0\nSub : 1\nMul : 2\nDiv : 3\n");
    printf("Enter Your Choose: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case sum:
        printf("%d + %d = %d\n",num1 , num2, num1 + num2);
        printf("%d + %d = %d\n",num1 , num2, ptr[0](num1, num2));
        break;
    
    case sub:
        printf("%d - %d = %d\n",num1 , num2, num1 - num2);
        printf("%d - %d = %d\n",num1 , num2, ptr[1](num1, num2));
        break;
    case mul:
        printf("%d * %d = %d\n",num1 , num2, num1 * num2);
        printf("%d * %d = %d\n",num1 , num2, ptr[2](num1, num2));
        break;
    case div:
        printf("%d / %d = %.02f\n",num1 , num2, (num1*1.0) / num2);
        printf("%d / %d = %d\n",num1 , num2, ptr[3](num1, num2));
        break;
    }
    return 0;
}