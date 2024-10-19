#include <stdio.h>

int main(void)
{
	
	
	int i;
	int sum , sum_1= 0;//求和数 
	int average = 0;//求平均值 
	int odd = 0;//求奇数 
	int even = 0;//求偶数 
	
	for (i=1; i<=100; i+=2) 
		sum = sum + i;
		
	printf("100之内奇数之和为：%d\n", sum);
	
	
	for (i=1; i<=100; ++i)
		if (i%2 == 1)//在这里我犯了一个错误 我误认为当i=1时，1/2=0.5，无法取余，在C语言中，取余符号%，如果不够整除则直接留下被除数当做余数。 
			sum_1 = sum_1 + 1;
			
	printf("100之内奇数的个数为：%d\n", sum_1);
	//修正之前的代码：printf("100之内奇数的个数为：%d\n", sum + 1); cr

	
	average = sum / sum_1 ;
	printf("100之内奇数的平均值为：%d\n", average); 

	
	for (i=1; i<=100; i++)
	{
		if (i%2 == 1)
			odd = odd + i;
		if (i%2 == 0)
			even = even + i;
	}
	
	printf("100之内奇数之和为%d,偶数之和为%d", odd, even);
	
	
} 

