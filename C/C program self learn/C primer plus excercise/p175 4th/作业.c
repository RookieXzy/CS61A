/*
2023��8��27��14:44:22
���for��ѭ�� 
*/
#include <stdio.h>

int main(void)
{
	char ch = 'A';
	int i,j;
	int length = 6;
	
	for (i = 0; i < length; i++) //һ����ʮ�� 
	{
		for (j = 0; j <= i; j++)   //a 65 A   66 67
		{
			printf("%c", ch++); 
		}
		printf("\n");
	}
	
}


