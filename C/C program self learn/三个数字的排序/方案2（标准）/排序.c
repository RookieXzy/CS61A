#include <stdio.h>

int main(void)
{
	int a,b,c;
	int t;
	
	printf("输入三个整数值(中间用空格隔开):");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	//a和b比较 如果a小于b 则a和b互换 此时a最大 
	if (a < c)
	{
		t = a;
		a = c;
		c = t;	
	}
	//临时最大数a与c比较 如果a小于c 则a与c互换  
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("从小到大依次是：%d %d %d", a, b ,c);
}
