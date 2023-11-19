#include <stdio.h>

int main() {
    float salary = 0;
    int status;
    printf("Enter your basic Salary: ");
    scanf("%f", &salary);
    printf("Enter 1 if you Single\n");
    printf("Enter 2 if you Married Without Kids\n");
    printf("Enter 3 if you Married Kids\n");
    printf("Enter your Num: ");
    scanf("%d", &status);
    if(status == 1)
    {
        printf("Salary = %.2f\n",salary);
    }
    else if (status == 2)
    {
        printf("Salary = %.2f\n",salary * 1.01);
    }
    else if (status = 3)
    {
        printf("Salary = %.2f\n",salary * 1.02);
    }
    
    return 0;
}