/*
	2023��8��21��10:50:53
	Ŀ�ģ���������ֵ�Ļ��� 

*/

#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int t;//�趨һ���ձ��� ��ʱ��temporary 
	
	t = a;//��ʱt�����Ѿ���ֵΪ1 
	a = b;//a�������� 
	b = t;//��t�е�1 ��ֵ��b 
	
	printf("a = %d  b = %d", a, b);
	
} 

/*
��������a = 2 b = 1 
*/
