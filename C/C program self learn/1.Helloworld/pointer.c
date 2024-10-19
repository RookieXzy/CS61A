#include <stdio.h>

void swap(int * n1, int * n2);
int main(void)
{
	printf("hello world!\n");
	int a = 3;
	int b = 4;
	swap(&a,&b);
    printf("%d  %d",a, b);
	return 0;
}


/*
void swap(int n1,int n2)
{
	int t;
	t = n1;
	n1 = n2;
	n2 = t;
}
在这里 全局变量传递到了n1和n2，值的传递是单向的，n1和n2的值无法传递回主函数。
在函数定义中的局部变量的改变并不会影响到主函数
所以大部分情况下都会使用return来返回一个值
错误的写法。
*/

//正确的写法

void swap(int * n1, int * n2) //采用指针的方式 从地址入手 交换两个变量的值
{
	int t;
	t = *n1;
	*n1 = *n2;
	*n2 = t;
}






