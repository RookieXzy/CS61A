#include <stdio.h>

/*int fib(int a);
int main(void)
{
    int n = 0;
    int back;
    scanf("%d", &n);
    back = fib(n);
    printf("%d", back);
    return 0;
}

int fib(int a)
{
    if(a == 1 || a == 2)
        return 1;
    else
        return fib(a-1) + fib(a-2);
}*/

//递归的写法





//算法

int fib(int a);
int main(void)
{
    int n = 0;
    int back;
    scanf("%d", &n);
    back = fib(n);
    printf("%d\n", back);

    return 0;
}

int fib(int a)
{
    int n = 1;
    int j = 1;
    int temp;
    if (a == 1 || a == 2)
        return 1;
    else
        for(int i =2; i<a; i++)
        {
            temp = n + j;
            n = j;
            j = temp;
        }
        return j;
}


