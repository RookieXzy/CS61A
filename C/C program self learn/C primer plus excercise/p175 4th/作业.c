/*
2023年8月27日14:44:22
理解for的循环 
*/
#include <stdio.h>

int main(void)
{
	char ch = 'A';
	int i,j;
	int length = 6;
	
	for (i = 0; i < length; i++) //一共有十行 
	{
		for (j = 0; j <= i; j++)   //a 65 A   66 67
		{
			printf("%c", ch++); 
		}
		printf("\n");
	}
	
}


