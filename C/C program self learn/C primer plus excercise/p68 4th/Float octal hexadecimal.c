/*
    2023年8月19日23:25:14
    目的：搞懂浮点数 double类型 八进制以及十六进制
    C primer plus 练习题
*/

#include <stdio.h>

int main(void)
{
    float value;
    printf("Please Enter a floating-point value:");
    scanf("%f", &value);
    printf("Fixed-point value notation:%lf\n", value);
    printf("exponential notation:%e\n", value);// %e表示以指数的形式输出，%e是指数输出控制符
    printf("octal value:%o\n", value);//八进制输出错误，原因未知
    printf("p notation:%a\n", value);

    return 0;
}

