#include <stdio.h>
#include <string.h>

void str_rev(char *str)
{
    int i = 0;
    int len = 0;
    char tempStr[50];
    while (str[len] != '\0')
    {
        tempStr[len] = str[len];
        len++;
    }
    len--;
    for (i = 0; len >= 0; ++i, --len)
    {
        str[i] = tempStr[len];
    }
}

int main()
{
    char str[] = "omar adel shalaan";
    str_rev(str);
    printf("%s\n", str);
    return 0;
}