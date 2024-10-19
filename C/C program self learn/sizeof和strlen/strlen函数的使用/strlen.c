/*
	2023年8月23日08:49:27 
*/

#include <stdio.h>
#include <string.h> //string 头文件提供了strlen()函数


int main(void)
{
	char name[40];
	
	printf("你的名字是？：");
	scanf("%s", name);
	printf("你好，%s.\n", name);
	printf("你的名字一共有%zd个字，占用了%zd个字节", strlen(name), sizeof(name)); //一个中文占两个字节 
	
} 
/*  strlen()函数的作用是给出字符串中字符的长度
	
	sizeof()函数的作用是 以字节为单位 给出对象的大小
	占用了多少个字节
	
*/ 
