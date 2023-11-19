#include <stdio.h>

int convert_Dis_to_Bin(int decimal_num)
{
   int  binary_num = 0, i = 1, remainder;

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }
    return binary_num;
}
int main()
{
    int num;
    while (1)
    {
        printf("Enter the Number: ");
        scanf("%d", &num);
        printf("bin of %d is %d\n", num, convert_Dis_to_Bin(num));
    }
    return 0;
}
