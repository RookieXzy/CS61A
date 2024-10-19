/*
2023年8月25日18:23:27 
*/ 

#include <stdio.h>

int main(void)
{
	long sum = 0;//求和 
	long num;//缓存值 
	
	printf("Enter an integer to be summed");
	printf("(Enter Q to quit)");

	while (scanf("%ld", &num) == 1)
	//scanf的返回值是0或者1 当scanf成功储存了一个值 那么返回值是存储成功的值 如果失败 则返回0 
	{
		sum = sum + num; 
		printf("Enter an integer to be summed:");
		printf("(Enter Q to quit)");
	}

	printf("Done!\n");
	printf("Amount %ld", sum);
}
