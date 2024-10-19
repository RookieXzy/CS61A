/*
2023年8月27日13:32:13
自定义函数的使用 以及返回值
功能：计算数的整数幂 
*/
#include <stdio.h>
double power(double n, int p);
//声明power()函数的返回类型是double，在括号中声明参数的数据类型 

int main(void)
{
	double num,ex_num;
	int integer;
	
	printf("输入任意一个数，接着输入一个整数：");
	printf("(按下q以退出)");
	
	while (scanf("%lf%d", &num, &integer) == 2) //scanf的返回值:成功输入值的个数 
	{
		ex_num = power(num, integer);
		printf("计算的结果是:%.3lf\n", ex_num);
		printf("按下数字继续运算，按下q退出:");		
	}
	
	 printf("玩的开心！");
}

//自定义power函数用于计算幂 
double power(double n, int p)
{
	int i;//用于更新的变量i 
	double pow = 1;//返回值 (检查发现没有初始化 导致最后运算为一个垃圾值)
	
	for (i = 1; i <= p; i++)
		pow *= n;	 

	return pow;
} 
