/*
2023年8月26日07:43:33 
*/

#include <stdio.h>

int main(void)
{
	char ch;
	int length;
	int i, j;
	
	printf("Enter a capital alpha:");
	scanf("%c", &ch);
	
	length = ch - 'A'; //声明变量length 存输入字母对应的循环次数 
	
	for (i = 0; i <= length; i++) //循环次数（行） 
	{
		char op = 'A' - 1; //把变量的初始化 放在循环中 每次循环都会初始化变量 也就是从A开始循环上升 
		for (j = 0; j < length - i; j++) //处理空格 i是一个动态的变量 每次i++都会使空格少一位 
			printf(" ");
		for (j = 0; j <= i; j++) //执行++op i次  
			printf("%c", ++op);
		for (j = 0; j < i; j++)
			printf("%c", --op);
		printf("\n");
	}
	
	return 0;
}

