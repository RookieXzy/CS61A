/*
2023年8月23日13:27:02 
探究#define C预设常量
以及char scanf的用法 
*/



#include <stdio.h>
#include <string.h> //string 头文件提供了strlen()函数

#define C_SENTENCE "if you feel happy clap your hands up."    //在预设常量的时候要大写 尽量可以以C（constant）开头表示 不要加=号 
int main(void)
{
	char name[40];
	int age; 
	
	printf("你的名字是？：");
	scanf("%s", name);           //如果要把字符串读入字符数组中 不要使用取地址符& 
	printf("请问你的年龄是？");
	scanf("%d", &age); 			 //如果要读入常规变量，要使用取地址符 
	printf("你好，%s.\n", name);
	printf("你的名字一共有%zd个字，占用了%zd个字节\n", strlen(name), sizeof(name)); //一个中文占两个字节 
	
	printf("%s\n", C_SENTENCE);
	printf("这句话一共有%zd个字，占用了%zd个字节\n", strlen(C_SENTENCE), sizeof(C_SENTENCE));
	
	return 0; 
} 
