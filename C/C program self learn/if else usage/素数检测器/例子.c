#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned long int num;
	unsigned long int div;
	_Bool prime;
	
	printf("输入一个正整数：");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, prime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if (num != div * div)
					printf("%lu可以被这两个%lu %lu数整除\n", num, div, num / div); 
				else
					printf("%lu可以被%lu整除\n", num, div);
				prime = false; 
			}
		}
		if (prime)
			printf("%lu是一个素数\n", num);
		printf("如果要继续请输入一个正整数：");
		printf("(按q以退出)"); 
	}
	
	printf("再见~\n");
}
