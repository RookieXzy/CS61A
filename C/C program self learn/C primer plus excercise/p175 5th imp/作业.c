/*
2023��8��26��07:43:33 
*/

#include <stdio.h>

int main(void)
{
	char ch;
	int length;
	int i, j;
	
	printf("Enter a capital alpha:");
	scanf("%c", &ch);
	
	length = ch - 'A'; //��������length ��������ĸ��Ӧ��ѭ������ 
	
	for (i = 0; i <= length; i++) //ѭ���������У� 
	{
		char op = 'A' - 1; //�ѱ����ĳ�ʼ�� ����ѭ���� ÿ��ѭ�������ʼ������ Ҳ���Ǵ�A��ʼѭ������ 
		for (j = 0; j < length - i; j++) //����ո� i��һ����̬�ı��� ÿ��i++����ʹ�ո���һλ 
			printf(" ");
		for (j = 0; j <= i; j++) //ִ��++op i��  
			printf("%c", ++op);
		for (j = 0; j < i; j++)
			printf("%c", --op);
		printf("\n");
	}
	
	return 0;
}

