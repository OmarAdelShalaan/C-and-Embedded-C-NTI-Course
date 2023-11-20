#include <stdio.h>


unsigned short  rising_edge_count(unsigned char signal);
 unsigned short falling_edge_count(unsigned char signal);

void main()
{
 
    unsigned char arr[12]={0,1,0,1,0,1,0,1,1,0,1,1};
    unsigned short rising_counts  = 0;
    unsigned short falling_counts = 0;
 
    for (int i = 0; i < 12; i++)
    {
        rising_counts  = rising_edge_count(arr[i]);
        falling_counts = falling_edge_count(arr[i]);
    }
 
    printf("rising edge count = %d\n" , rising_counts);
    printf("falling edge count = %d\n" , falling_counts);
   
}
 
unsigned short rising_edge_count(unsigned char signal)
{
    static unsigned short preSignal = 0;
    static unsigned short count = 0;
    if(preSignal == 0 && signal == 1)
        count++;
    preSignal = signal;    
    return count;
}

unsigned short falling_edge_count(unsigned char signal)
{
    static unsigned short preSignal = 0;
    static unsigned short count = 0;
    if(preSignal == 1 && signal == 0)
        count++;
    preSignal = signal;    
    return count;
}
