/*
	2023��8��23��08:49:27 
*/

#include <stdio.h>
#include <string.h> //string ͷ�ļ��ṩ��strlen()����


int main(void)
{
	char name[40];
	
	printf("��������ǣ���");
	scanf("%s", name);
	printf("��ã�%s.\n", name);
	printf("�������һ����%zd���֣�ռ����%zd���ֽ�", strlen(name), sizeof(name)); //һ������ռ�����ֽ� 
	
} 
/*  strlen()�����������Ǹ����ַ������ַ��ĳ���
	
	sizeof()������������ ���ֽ�Ϊ��λ ��������Ĵ�С
	ռ���˶��ٸ��ֽ�
	
*/ 
