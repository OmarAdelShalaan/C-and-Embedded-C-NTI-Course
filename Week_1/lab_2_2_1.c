#include <stdio.h>

int main()
{
	int x = 6,y = 2, z = 5;
	printf("x : %d set first bit : %d\n",x , (x | 0x0001));
	printf("y : %d clear second bit : %d\n",y , (y & 0xFFFD));
	printf("z : %d toggle third bit : %d\n",z , (z ^ 0x0004));
	return 0;
}