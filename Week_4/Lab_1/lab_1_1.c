#include <stdio.h>

void Cul_Area_Cicumference(float radius,float *area, float *Cicumference)
{
    *area = 3.14*3.14*radius;
    *Cicumference = 2*3.14*radius;
}
int main()
{
    float radius,area,Cicumference;
    printf("Enter your radius value: ");
    scanf("%f",&radius);
    Cul_Area_Cicumference(radius, &area, &Cicumference);
    printf("Area: %.2f\n", area);
    printf("Cicumference: %.2f\n", Cicumference);
    return 0;
}