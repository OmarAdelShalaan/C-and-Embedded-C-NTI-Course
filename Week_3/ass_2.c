#include <stdio.h>
#include <stdlib.h>
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
int numOfDigit(int num)
{
    int count = 0;
    while(num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
int main()
{
    int sum = 0, n, temp;
    int power = 0;
    printf("Enter your Num: ");
    scanf("%d", &n);
    temp = n;
    power = numOfDigit(n);
    while (n > 0)
    {
        sum += pow_Num(n%10, power);
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
