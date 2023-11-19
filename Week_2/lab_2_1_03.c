#include <stdio.h>

int main() {
    int n, i;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}