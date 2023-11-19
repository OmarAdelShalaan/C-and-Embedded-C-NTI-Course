#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float _sqr;
    printf("ax^2 + bx + c = 0\n");
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c); 
    _sqr = (b*b - 4 * a * c )>= 0? sqrt(b*b - 4 * a * c ): sqrt( b*b * -1 +  4 * a * c );

    if((b*b - 4 * a * c ) >= 0)
    {
        printf("x = %.3f + %.3f\n",(-1 * b)/(2 * a), _sqr / (2 * a)); 
        printf("x = %.3f - %.3f\n",(-1 * b)/(2 * a), _sqr / (2 * a));
    }
    else
    {
        printf("x = %.3f + %.3fi\n",(-1 * b)/(2 * a), _sqr / (2 * a)); 
        printf("x = %.3f - %.3fi\n",(-1 * b)/(2 * a), _sqr / (2 * a));
    }

    return 0;
}