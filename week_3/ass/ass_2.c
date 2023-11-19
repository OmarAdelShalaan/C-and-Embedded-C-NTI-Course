#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int pow_Num(int num, int pow)
{
	int i;
	int powNum = 1;
	for(i = 0; i < pow; i++)
	{
		powNum *= num;
	}
	return powNum;
}
int main()
{
    int sum = 0, n, temp;
    printf("Enter your Num: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        sum += pow_Num(n%10,3);
        n /=10; 
    }
    if (sum == temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
