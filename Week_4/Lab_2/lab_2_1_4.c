#include <stdio.h>

int strlen(char *str)
{
    int count = 0;
    while( *str != '\0' )
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char *str = "Omar Adel Shalaan";
    printf("%s\n", str);
    printf("len str: %d\n",strlen(str));

    return 0;
}