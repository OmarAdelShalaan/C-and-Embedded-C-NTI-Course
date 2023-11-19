#include <stdio.h>

void stop()
{
    printf("Stop\n");
}
void FullSpeed()
{
    printf("Full Speed\n");
}
void HalfSpeed()
{
    printf("Half Speed\n");
}

int main()
{
    void (*ptr[3])(void);
    ptr[0] = HalfSpeed;
    ptr[1] = stop;
    ptr[2] = FullSpeed;
    int count = 0;
    char _c;
    while (1)
    {
        if (count == 0)
        {
            ptr[0]();
        }
        else if (count == 1)
        {
            ptr[1]();
        }
        else if (count == 2)
        {
            ptr[0]();
        }
        else if (count == 3)
        {
            ptr[2]();
        }
        scanf("%c", &_c);
        if (_c == 'c')
        {
            count++;
            if (count == 4)
                count = 0;
        }
    }

    return 0;
}