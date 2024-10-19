/*
2023年8月27日19:34:54
putchar和getchar() 的使用 
*/ 
#include <stdio.h>

#define SPACE ' '  //定义 空格字符 
int main(void)
{
	char ch;
	
	ch = getchar();
	while (ch != '\n')  //当一行未结束的时候 检测换行 
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
	    ch = getchar();
	}
	return 0;
}

