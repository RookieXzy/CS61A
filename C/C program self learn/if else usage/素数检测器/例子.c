#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned long int num;
	unsigned long int div;
	_Bool prime;
	
	printf("����һ����������");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, prime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if (num != div * div)
					printf("%lu���Ա�������%lu %lu������\n", num, div, num / div); 
				else
					printf("%lu���Ա�%lu����\n", num, div);
				prime = false; 
			}
		}
		if (prime)
			printf("%lu��һ������\n", num);
		printf("���Ҫ����������һ����������");
		printf("(��q���˳�)"); 
	}
	
	printf("�ټ�~\n");
}
