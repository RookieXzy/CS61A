#include <stdio.h>

int main(void)
{
	int y = 1;
	int x; 
	x = (y < 0) ? -y : y; 
	printf("%d", x);
	
	return 0;
	
//? ���������Ԫ����� ����������� ��������ֱ��� x -y y
//��y < 0 ʱ x��ֵΪ -y ���� x��ֵΪ y    ?��������һ������� 
} 
