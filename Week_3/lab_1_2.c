#include <stdio.h>

int biggestNum(int a, int b, int c)
{
    return a > b? a > c ? a: c: b > c? b : c;
}
int main()
{
    int a; int b; int c;
    printf("Enter the Number 1: ");
    scanf("%d", &a);
    printf("Enter the Number 2: ");
    scanf("%d", &b);
    printf("Enter the Number 3: ");
    scanf("%d", &c);
    printf("the Biggest num is %d", biggestNum(a,b,c));

    return 0;
}
