/*
	2023��8��21��10:58:41
	Ŀ�ģ��������ֵ����� 
*/

#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("������������ֵ(�ÿո����)��");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
			printf("�Ӵ�С�����ǣ�%d %d %d", a, b, c);
		else
		{
			if (a > c)
				printf("�Ӵ�С�����ǣ�%d %d %d", a, c, b);
			else
				printf("�Ӵ�С�����ǣ�%d %d %d", c, a, b);
		}		 
	}
	else
	{
		if (a > c)
			printf("�Ӵ�С�����ǣ�%d %d %d", b, a, c);
		else
		{
			if (c > b)
				printf("�Ӵ�С�����ǣ�%d %d %d", c, b, a);
			else
				printf("�Ӵ�С�����ǣ�%d %d %d", b, c, a);
		}
	}
	
	
	return 0;
}
/*
�㷨���£�
 
	��� a > b 
		b�Ƚ�c  ���b > c�� 	a > b > c
				���b < c�� a�Ƚ�c
					a > c �� a > c > b
					a < c �� c > a > b
	��� a < b
		a�Ƚ�c	���a > c �� b > a > c
				���a < c ��c�Ƚ�b
					c > b �� c > b > a
					c < b ��  b > c > a
*/
