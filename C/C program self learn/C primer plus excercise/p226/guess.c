#include <stdio.h>

int main(void)
{
    int number = 1;
    printf("choose a integer from 1-100.\n");
    printf("I will guess it!\n");
    printf("If i say it right prees 'y' but not 'n'\n");
    printf("SO its the number %d?\n", number);
    while(getchar() != 'y')
    {
        printf("so its the number %d?\n", ++number);
        while(getchar() != '\n')
            continue; //因为这个地方按下回车进行检测，相当于输入了一次换行符，需�?
                     //把换行符消除�?
    }
    printf("I know i can do it!\n");

    return 0;
}


