/*
2023��8��25��18:23:27 
*/ 

#include <stdio.h>

int main(void)
{
	long sum = 0;//��� 
	long num;//����ֵ 
	
	printf("Enter an integer to be summed");
	printf("(Enter Q to quit)");

	while (scanf("%ld", &num) == 1)
	//scanf�ķ���ֵ��0����1 ��scanf�ɹ�������һ��ֵ ��ô����ֵ�Ǵ洢�ɹ���ֵ ���ʧ�� �򷵻�0 
	{
		sum = sum + num; 
		printf("Enter an integer to be summed:");
		printf("(Enter Q to quit)");
	}

	printf("Done!\n");
	printf("Amount %ld", sum);
}
