/*
2023年8月27日23:17:40
getchar是单个字符的检查
那么如何只检查字母 而不检查特殊符号呢。
使用isalpha()函数 
*/ 
#include <stdio.h>
#include <ctype.h> //包含了isalpha函数的头文件 

int main(void)
{
	char ch;
	
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch); 
	}
	
	putchar(ch); //打印换行符 
	
	return 0;
} 
