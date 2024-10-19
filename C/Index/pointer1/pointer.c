#include <stdio.h>

int devide(int divisor, int dividend, int *quotient);
//除数 被除数 商
int main(void)
{
    int a,b,c;
    a = 30;
    b = 0;
    if(devide(a,b,&c))
        printf("%d\n", c);
    else
        printf("ERROR!\n");
}

int devide(int divisor, int dividend, int *quotient)
{
    int ret = 1;
    if(dividend == 0)
        ret = 0;
    else
        *quotient = divisor / dividend;
    return ret;
}

