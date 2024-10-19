/*2024Äê1ÔÂ14ÈÕ17:25:32*/

#include <stdio.h>
#define STOP '#'

int main(void)
{
    char ch;
    int times = 0;

    printf("input something (# to quit)\n");
    while((ch = getchar()) != STOP)
    {
        if(ch == '.')
        {
            putchar('!');
            times++;
        }    
        else if(ch == '!')
        {    
            printf("!!");
            times++;
        }
        else
            putchar(ch);
    }
    
    printf("\ntotally have %d times change\n", times);

    return 0;
}