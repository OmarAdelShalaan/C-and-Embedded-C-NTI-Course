#include <stdio.h>

int main() {
    int n, i;
    long long fac = 1;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        fac *= i;
    }
    printf("n = %d fac = %d\n", n, fac);

    return 0;
}