/*
2023��8��22��14:15:01 
�±�p71��ҵ 
*/

#include <stdio.h>

int main(void)
{
	
	
	int i;
	int sum = 0,
		sum_1 = 0;//�����
	int average = 0;//��ƽ��ֵ 
	int odd = 0;//������ 
	int even = 0;//��ż�� 
	
//���ʣ�Ϊʲôint sum,sum_1 = 0; ͬʱ����������ʱ�������� 

	for (i = 1; i <= 100; i += 2) 
		sum = sum + i;
		
	printf("100֮������֮��Ϊ��%d\n", sum);
	
	
	for (i=1; i<=100; ++i)
		if (i%2 == 1)//�������ҷ���һ������ ������Ϊ��i=1ʱ��1/2=0.5���޷�ȡ�࣬��C�����У�ȡ�����%���������������ֱ�����±��������������� 
			sum_1 = sum_1 + 1;
			
	printf("100֮�������ĸ���Ϊ��%d\n", sum_1);
	//����֮ǰ�Ĵ��룺printf("100֮�������ĸ���Ϊ��%d\n", sum + 1); 

	
	average = sum / sum_1 ;
	printf("100֮��������ƽ��ֵΪ��%d\n", average); 

	
	for (i=1; i<=100; i++)
	{
		if (i%2 == 1)
			odd = odd + i;
		if (i%2 == 0)
			even = even + i;
	}
	
	printf("100֮������֮��Ϊ%d,ż��֮��Ϊ%d", odd, even);
	
	
} 




