#include <stdio.h>
#include <ctype.h>	//���� isspace()������ ͷ�ļ� 
#include <stdbool.h> //������ �����������͵� ͷ�ļ� 

#define STOP '|' //����һ����β�����ַ�

int main(void)
{
	char c; //��������ȥ���ַ� 
	char prev;
	long n_chars = 0;//�洢�ַ��� 
	int n_lines = 0;//�洢���� 
	int n_words = 0;//�洢���ʵ����� 
	int p_lines = 0; 
	bool inword = false;//��ⵥ�ʵĿ�ʼ�ͽ�β
	
	printf("����һ������ �Լ���ж��ٸ����ʣ�\n");
	while ((c = getchar()) != STOP)//�������ַ���ֱ������|��Ϊֹ 
	{
		n_chars++;//ÿ��⵽һ���ַ����ͼ�1
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword) //����⵽���ǿո� �� inwordΪ�� ��ʼͳ�Ƶ��� 
//isspace()���������ַ��Ƿ�Ϊ�ո�������򷵻�1������Ƿ��򷵻�0 
//!inword�ȼ��� inword == false 
		{
			inword = true;
			n_words++;//����ͳ�Ƽ�1
		} 
/*����������hello world ����һ���ַ���h����ô����if�жϣ�!isspace(c)Ϊ�棬!inwordΪ�档��ʱinword��Ϊ�棬����ͳ�Ƽ�1
��e��ʱ�򲻻ᷢ���ı䣬�ȼ�⵽�ո��ʱ��isspace(c)Ϊ�棬inwordΪ�档�����ϣ�inword�ٴλص���false����*/
		if (isspace(c) && inword)//����⵽�ո� ���Ҵ�ʱ inword�Ѿ�Ϊ�� �򵥴�ͳ�����
			inword = false;
		prev = c;
	} 
	

	if (prev != '\n')
		p_lines = 1;
	printf("һ����%ld���ַ� %d������ %d��   ", n_chars, n_words, n_lines);
	printf("������������%d", p_lines);
} 
 
