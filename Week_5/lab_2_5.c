#include <stdio.h>
#include <string.h>

void str_upper(char *str)
{
    int i = 0;
    while(str[i] !='\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    
}
void str_lower(char *str)
{
    int i = 0;
    while(str[i] !='\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    
}

int main()
{
    char str[50];
    printf("Enter Your First str: ");
    gets(str);
    str_upper(str);
    printf("%s\n",str);
    str_lower(str);
    printf("%s\n",str);
    return 0;
}