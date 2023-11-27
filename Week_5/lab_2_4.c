#include <stdio.h>
#include <string.h>

int str_cmp(char *str1, char *str2)
{
    int i = 0;
    while(str1[i] !='\0' || str2[i] !='\0')
    {
        if(str1[i] != str2[i])
            return -1;
        i++;
    }
    return 0;
}

int main()
{
    char str1[50];
    char str2[50];
    printf("Enter Your First str: ");
    gets(str1);
    printf("Enter Your 2 str: ");
    gets(str2);
    printf("%d\n", str_cmp(str1, str2));
    return 0;
}