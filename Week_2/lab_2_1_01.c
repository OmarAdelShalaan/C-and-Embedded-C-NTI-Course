#include <stdio.h>

int main() {
    int i;
    unsigned long long sum = 0;
    for(i = 0; i < 100; i+=2 )
    {
        if( i % 2 == 0)
        {
            printf("%d\n",i);
            sum += i;
        }
    }
    printf("sum = %ull", sum);
    return 0;
}