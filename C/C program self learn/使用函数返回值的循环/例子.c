/*
2023��8��27��13:32:13
�Զ��庯����ʹ�� �Լ�����ֵ
���ܣ��������������� 
*/
#include <stdio.h>
double power(double n, int p);
//����power()�����ķ���������double���������������������������� 

int main(void)
{
	double num,ex_num;
	int integer;
	
	printf("��������һ��������������һ��������");
	printf("(����q���˳�)");
	
	while (scanf("%lf%d", &num, &integer) == 2) //scanf�ķ���ֵ:�ɹ�����ֵ�ĸ��� 
	{
		ex_num = power(num, integer);
		printf("����Ľ����:%.3lf\n", ex_num);
		printf("�������ּ������㣬����q�˳�:");		
	}
	
	 printf("��Ŀ��ģ�");
}

//�Զ���power�������ڼ����� 
double power(double n, int p)
{
	int i;//���ڸ��µı���i 
	double pow = 1;//����ֵ (��鷢��û�г�ʼ�� �����������Ϊһ������ֵ)
	
	for (i = 1; i <= p; i++)
		pow *= n;	 

	return pow;
} 
