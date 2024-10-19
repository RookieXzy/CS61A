// 2024 2.25 02:25

#include <stdio.h>
#include <stdbool.h> //提供 bool 型变量

long getlong(void);//检查输入的数字是否为整数且是否是正确的格式
long sum_squares(long a, long b); //计算两个数字之间的所有平方和
bool get_right(long begin, long end, long MAX, long MIN);//检查输入的数字是否超出了限制

int main(void)
{
    const long MAX = +1000000L; //the maxinum of the range
    const long MIN = -1000000L; //the mininum of the range
    
    long start, stop;
    long answer;


    printf("This program is use to calculate the sum of the"
           "squares of the integer in a range.\nThe lower bound"
           "should not be less than -1000000 and the upper bound"
           "should not be more than 1000000\n"
           "Enter the limits:(Enter both 0 to quit)\n"
           "lower limits:");
    start = getlong();
    printf("upper limit:");
    stop = getlong();
    while (start != 0 || stop != 0)
    {
        if(get_right(start, stop, MAX, MIN))
            printf("please try again");
        else
        {
            answer = sum_squares(start,stop);
            printf("The range from %ld to %ld the sum of squaer is %ld\n", start, stop, answer);
        }
        printf("Enter the limits:(Enter both 0 to quit)\n");
        printf("lower limit:");
        start = getlong();
        printf("upper limit:");
        stop = getlong();
    }
    printf("Done!\n");

    return 0;
}

long getlong(void)
{
    long input;
    char ch;
    while(scanf("%ld", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" it is not a integer please try again:");
    }

    return input;
}

long sum_squares(long a, long b) //计算两个数字间所有整数的平方和
{
    long sum;
    long i;
    for(i = a; i < b; i++)
        sum = sum + i * i;
    
    return sum;
}

bool get_right(long begin, long end, long max, long min)
{
    bool check = false;
    if (begin > end)
    {
        printf("the lower one is bigger than upper one\n");
        check = true;
    }
    if (begin > max || end > max)
    {
        printf("over the range");
        check = true;
    }
    if (begin < min || end < min)
    {
        printf("lower the range");
        check = true;
    }

    return check;
}