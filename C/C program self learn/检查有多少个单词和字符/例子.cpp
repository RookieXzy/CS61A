#include <stdio.h>
#include <ctype.h>	//包含 isspace()函数的 头文件 
#include <stdbool.h> //包含了 布尔数据类型的 头文件 

#define STOP '|' //设置一个结尾检测的字符

int main(void)
{
	char c; //检测输入进去的字符 
	char prev;
	long n_chars = 0;//存储字符数 
	int n_lines = 0;//存储行数 
	int n_words = 0;//存储单词的数量 
	int p_lines = 0; 
	bool inword = false;//检测单词的开始和结尾
	
	printf("输入一段文字 以检测有多少个单词：\n");
	while ((c = getchar()) != STOP)//检查逐个字符，直到遇见|符为止 
	{
		n_chars++;//每检测到一个字符，就加1
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword) //当检测到不是空格 且 inword为假 则开始统计单词 
//isspace()函数会检测字符是否为空格，如果是则返回1，如果是否则返回0 
//!inword等价于 inword == false 
		{
			inword = true;
			n_words++;//单词统计加1
		} 
/*假设输入了hello world 检测第一个字符是h，那么进入if判断，!isspace(c)为真，!inword为真。此时inword就为真，单词统计加1
到e的时候不会发生改变，等检测到空格的时候，isspace(c)为真，inword为真。检测完毕，inword再次回调到false重置*/
		if (isspace(c) && inword)//当检测到空格 并且此时 inword已经为真 则单词统计完毕
			inword = false;
		prev = c;
	} 
	

	if (prev != '\n')
		p_lines = 1;
	printf("一共有%ld个字符 %d个单词 %d行   ", n_chars, n_words, n_lines);
	printf("不完整的行有%d", p_lines);
} 
 
