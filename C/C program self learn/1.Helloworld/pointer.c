#include <stdio.h>

void swap(int * n1, int * n2);
int main(void)
{
	printf("hello world!\n");
	int a = 3;
	int b = 4;
	swap(&a,&b);
    printf("%d  %d",a, b);
	return 0;
}


/*
void swap(int n1,int n2)
{
	int t;
	t = n1;
	n1 = n2;
	n2 = t;
}
������ ȫ�ֱ������ݵ���n1��n2��ֵ�Ĵ����ǵ���ģ�n1��n2��ֵ�޷����ݻ���������
�ں��������еľֲ������ĸı䲢����Ӱ�쵽������
���Դ󲿷�����¶���ʹ��return������һ��ֵ
�����д����
*/

//��ȷ��д��

void swap(int * n1, int * n2) //����ָ��ķ�ʽ �ӵ�ַ���� ��������������ֵ
{
	int t;
	t = *n1;
	*n1 = *n2;
	*n2 = t;
}






