/*
	2023年8月21日10:58:41
	目的：三个数字的排序 
*/

#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("输入三个整数值(用空格隔开)：");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
			printf("从大到小依次是：%d %d %d", a, b, c);
		else
		{
			if (a > c)
				printf("从大到小依次是：%d %d %d", a, c, b);
			else
				printf("从大到小依次是：%d %d %d", c, a, b);
		}		 
	}
	else
	{
		if (a > c)
			printf("从大到小依次是：%d %d %d", b, a, c);
		else
		{
			if (c > b)
				printf("从大到小依次是：%d %d %d", c, b, a);
			else
				printf("从大到小依次是：%d %d %d", b, c, a);
		}
	}
	
	
	return 0;
}
/*
算法如下：
 
	如果 a > b 
		b比较c  如果b > c则 	a > b > c
				如果b < c则 a比较c
					a > c 则 a > c > b
					a < c 则 c > a > b
	如果 a < b
		a比较c	如果a > c 则 b > a > c
				如果a < c 则c比较b
					c > b 则 c > b > a
					c < b 则  b > c > a
*/
