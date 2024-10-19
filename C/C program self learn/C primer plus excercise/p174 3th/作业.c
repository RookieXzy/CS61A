/*
2023年8月27日18:05:50 
字母金字塔 
*/

#include <stdio.h>

int main(void)
{
	//char ch = 'F';  不能把输出的变量放在循环外，因为每次循环都要初始化变量 
	int i;
	int j;
	
	for(i = 0; i <= 5; i++)
	{
		char ch = 'F';// 正确的 把输出变量放在循环内 每次循环确保初始化变量 
		for(j = 0; j <= i; j++)
			printf("%c", ch--);
		printf("\n");	
	}
	
}
