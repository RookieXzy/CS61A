#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 64, 129, 100, 20, 11, 12};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    //这里marbles + SIZE 指向的是mabrles第十个元素的后面的地址
    printf("The total number of marbles is %ld", answer);

}

int sump(int * start, int * end)
{
    int total;

    while(start < end)//在这里start < end 当循环到第十次start就和end相等
    {
        total += *start;
        start++;
        //当指针+1的时候 并不指向下一个字节的地址，而是指向下一个数组元素的地址
    }

    return total;
}

//*marbles + 2  marbles第一个元素的值加2
//*(marbles + 2) marbles 第三个元素的值
