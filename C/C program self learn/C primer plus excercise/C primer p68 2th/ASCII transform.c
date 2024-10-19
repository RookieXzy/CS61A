/* 
    2023年8月19日19:24:16
    目的：探究ASCII码的转化
*/

#include <stdio.h>

int main(void)
{
    int ch;
    printf("Please enter a integer");
    scanf("%d", &ch);

    printf("this number %d in ASCII is %c", ch, ch);

    return 0;
}
/*
char类型用于存储字符，但是char实际上存储的不是字符，而是一个整数。
用特定的整数类型来表示这些字符。
ASCII码规定了用什么整数去表示这些字符。
所以用%c char类型输出就能得到ASCII码相应的字符
*/
