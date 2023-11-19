#include <stdio.h>
#define pi 3.14
int main()
{
	float reduis, area,cicum;
	printf("Enter reduis: ");
	scanf("%f",&reduis);
	printf("Area: %.2f\n",pi*reduis*reduis);
	printf("Cicumfernce: %.2f\n",pi*reduis*2);
	return 0;
}