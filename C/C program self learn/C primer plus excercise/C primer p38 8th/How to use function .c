/*
    2023年8月19日14:10:45
    目的：学会如何自定义函数
*/
#include <stdio.h>

void one_three(void);//自定义一个名称为one-three的函数
void two(void);//自定义一个名称为two的函数
//这里的第一个void代表自定义函数没有返回值，括号里的void代表自定义函数不带参数。
int main(void)
{
    printf("Starting now!\n");// /n是转义序列
    one_three();
    printf("done!\n");

    getchar();
    return 0;
}
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}

/*
    运行结果：
    Starting now!
    one
    two
    three
    done!

*/
