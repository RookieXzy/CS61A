/*
2023��8��27��19:34:54
putchar��getchar() ��ʹ�� 
*/ 
#include <stdio.h>

#define SPACE ' '  //���� �ո��ַ� 
int main(void)
{
	char ch;
	
	ch = getchar();
	while (ch != '\n')  //��һ��δ������ʱ�� ��⻻�� 
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
	    ch = getchar();
	}
	return 0;
}

