#include <stdio.h>

int main()
{
	int num1,num2;
	printf("Enter num 1: ");
	scanf("%d",&num1);
	printf("Enter num 2: ");
	scanf("%d",&num2);
	
	(num1 == num2)? (printf("num1 = num2\n")) :\
	(num1 > num2)? printf("num1: %d", num1): printf("num2: %d", num2);
	return 0;
}