/*
2023��8��23��13:27:02 
̽��#define CԤ�賣��
�Լ�char scanf���÷� 
*/



#include <stdio.h>
#include <string.h> //string ͷ�ļ��ṩ��strlen()����

#define C_SENTENCE "if you feel happy clap your hands up."    //��Ԥ�賣����ʱ��Ҫ��д ����������C��constant����ͷ��ʾ ��Ҫ��=�� 
int main(void)
{
	char name[40];
	int age; 
	
	printf("��������ǣ���");
	scanf("%s", name);           //���Ҫ���ַ��������ַ������� ��Ҫʹ��ȡ��ַ��& 
	printf("������������ǣ�");
	scanf("%d", &age); 			 //���Ҫ���볣�������Ҫʹ��ȡ��ַ�� 
	printf("��ã�%s.\n", name);
	printf("�������һ����%zd���֣�ռ����%zd���ֽ�\n", strlen(name), sizeof(name)); //һ������ռ�����ֽ� 
	
	printf("%s\n", C_SENTENCE);
	printf("��仰һ����%zd���֣�ռ����%zd���ֽ�\n", strlen(C_SENTENCE), sizeof(C_SENTENCE));
	
	return 0; 
} 
