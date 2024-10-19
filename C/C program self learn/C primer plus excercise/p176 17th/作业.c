#include <stdio.h>

#define RATE 0.08
int main(void)
{
	int year = 1;
	double amount;
	printf("年    余额");
	
	for (amount = 100; amount >= 0; amount += amount * RATE)
	{
		printf("%d    %.3lf\n", year, amount); 
		year++;  //在最后一次循环时 year++仍然多执行了一次 
		amount -= 10;
	}
	printf("这份大奖需要%d年才会取完", year);

}
