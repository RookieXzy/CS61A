/*
2023��8��27��23:17:40
getchar�ǵ����ַ��ļ��
��ô���ֻ�����ĸ ���������������ء�
ʹ��isalpha()���� 
*/ 
#include <stdio.h>
#include <ctype.h> //������isalpha������ͷ�ļ� 

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
	
	putchar(ch); //��ӡ���з� 
	
	return 0;
} 
