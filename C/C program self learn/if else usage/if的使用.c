/*
	2023��8��21��10:06:58
	Ŀ�ģ�Ū��if else ����

*/


#include <stdio.h>

int main(void)
{
	if (3 > 2)
		printf("AAAA\n");

//��ʱֻ��if��������һ����������if��



	if (1 > 2)
	{
		printf("CCCC\n");
		printf("DDDD");
	}
//��ʱCC��DD�����������
//��Ϊ��������һ��{}�趨��������䶼������if��




	if (3 > 2)
	{
		printf("AAAA");
	}
	else
	{
		printf("BBBB");
	}
//���if���ʽ�в�������������else������




	if (1)
		printf("111");
	else if (2)
		printf("2222");
	else if (3)
		printf("3333");
	else
		printf("4444");
/*
	��δ��� ���ȿ�if�еı��ʽ�Ƿ����
	���if �е�1���� �����111
	���1������ ����else if �е�2�Ƿ����
	�Դ����� ��һ��������������������
*/
	


//	if (1)
//		printf("111");
//	printf("2222");//��Ϊifֻ�ܿ���һ����䣬��δ��벻��if����֮��
//	else if (2)//������Ϊ����ֱ����else if��ͷ��û����֮ƥ���if
	//	printf("2222");
	//else if (3)
	//	printf("3333");
//	else
	//	printf("4444");

}