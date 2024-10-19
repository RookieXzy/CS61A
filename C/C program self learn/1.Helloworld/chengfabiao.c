#include <stdio.h>

int main(void)
{
    for(int line=1; line <= 9; line++)
    {
        for(int i =1;i <= 9; i++)
        {
            if(i>line)
                break;
            printf("%d x %d = %d  ", i, line, i * line);
        }
        printf("\n");
    }

    return 0;
}
