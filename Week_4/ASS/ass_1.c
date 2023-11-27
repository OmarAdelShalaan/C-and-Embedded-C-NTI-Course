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
    char _c;
    int count = 0;
    while (1)
    {
        switch (count )
        {
        case 0:
            ptr[0]();
            break;
        case 1:
        case 3:
            ptr[1]();
            break;
        case 2:
            ptr[2]();
            break;

        }
        scanf("%c", &_c);
        fflush(stdin);
        if (_c == 'c')
        {
            count = (count + 1) % 4;
        }   
    }
    return 0;
}