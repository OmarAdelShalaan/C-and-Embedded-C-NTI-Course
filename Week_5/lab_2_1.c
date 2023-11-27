#include <stdio.h>
#include <string.h>

int main()
{
    char str[2][20];
    printf("Enter Your First Name: ");
    gets(str[0]);
    printf("Enter Your Last Name: ");
    gets(str[1]);
    printf("%s %s\n", str[0], str[1]);
    return 0;
}