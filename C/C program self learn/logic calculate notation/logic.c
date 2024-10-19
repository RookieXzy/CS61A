/*
    2023年8月20日22:11:28
    目的：搞懂逻辑运算符
*/
#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    int m;

    m = (3>2) && (i=8);
    printf("m=%d i=%d", m, i);
/*  
    输出结果m=1 i=8 因为第一个表达式中3>2为真
    在C语言中 非0就是真 第二个表达式中 i = 8说明i被赋值了8 8非0 也是真
    所以M是真以1输出
*/
    m = (1>2) && (j=8);
    printf("m=%d j=%d", m, j);
/*
    输出结果：m=0 j=20
    因为第一个表达式中1>2为假
    在&&中 左边表达式为假 右边表达式则不会执行 (因为有假的了，一定是假的)
    在||中 左边表达式为真 右边表达式则不会执行（因为有真的了，一定是真的）
*/

}


/*
    !(非) &&并且 || 或
*/
