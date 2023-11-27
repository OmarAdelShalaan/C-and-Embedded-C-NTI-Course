#include <stdio.h>
#include <string.h>

int countWord(char *str)
{
    if(str == NULL)
    {
        return 0;
    }
    int i = 0;
    int count = 1;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' && ( (str[i+1] >= 'a' &&str[i+1] <= 'z' ) \
                || (str[i+1] >= 'A' &&str[i+1] <= 'Z' ) ))
            count++;
        i++;
    }
    return count;
}

int main()
{
    char str[] = "Omar  Adel  shalaan";
    
    printf("%d\n", countWord(str));
    return 0;
}