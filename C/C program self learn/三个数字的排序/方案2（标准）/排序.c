#include <stdio.h>

int main(void)
{
	int a,b,c;
	int t;
	
	printf("������������ֵ(�м��ÿո����):");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	//a��b�Ƚ� ���aС��b ��a��b���� ��ʱa��� 
	if (a < c)
	{
		t = a;
		a = c;
		c = t;	
	}
	//��ʱ�����a��c�Ƚ� ���aС��c ��a��c����  
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("��С���������ǣ�%d %d %d", a, b ,c);
}
