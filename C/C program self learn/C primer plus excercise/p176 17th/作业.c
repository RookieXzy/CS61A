#include <stdio.h>

#define RATE 0.08
int main(void)
{
	int year = 1;
	double amount;
	printf("��    ���");
	
	for (amount = 100; amount >= 0; amount += amount * RATE)
	{
		printf("%d    %.3lf\n", year, amount); 
		year++;  //�����һ��ѭ��ʱ year++��Ȼ��ִ����һ�� 
		amount -= 10;
	}
	printf("��ݴ���Ҫ%d��Ż�ȡ��", year);

}
