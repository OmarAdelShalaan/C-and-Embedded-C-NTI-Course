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
    int len = strlen(str);
    printf("%s\n", str);
    printf("len str: %d\n",len);
    printf("%p\n",&str[0]);
    printf("%p\n",&str[len]);
    if(&str[0] > &str[len] )
    {
        printf("Big Endian\n");
    }
    else
    {
        printf("Little Endian\n");
    }
    return 0;
}