#include <stdio.h>
#define pi 3.14
int main()
{
	int num1,num2;
	printf("Enter num 1: ");
	scanf("%d",&num1);
	printf("Enter num 2: ");
	scanf("%d",&num2);
	printf("Sum: %d + %d = %d\n",num1,num2,num1+num2);
	printf("Sub: %d - %d = %d\n",num1,num2,num1-num2);
	printf("Mul: %d * %d = %d\n",num1,num2,num1*num2);
	printf("Div: %d / %d = %d\n",num1,num2,num1/num2);
	printf("Rem: %d %% %d = %d\n",num1,num2,num1%num2);
	return 0;
}