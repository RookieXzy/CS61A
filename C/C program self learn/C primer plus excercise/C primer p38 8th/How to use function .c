/*
    2023��8��19��14:10:45
    Ŀ�ģ�ѧ������Զ��庯��
*/
#include <stdio.h>

void one_three(void);//�Զ���һ������Ϊone-three�ĺ���
void two(void);//�Զ���һ������Ϊtwo�ĺ���
//����ĵ�һ��void�����Զ��庯��û�з���ֵ���������void�����Զ��庯������������
int main(void)
{
    printf("Starting now!\n");// /n��ת������
    one_three();
    printf("done!\n");

    getchar();
    return 0;
}
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}

/*
    ���н����
    Starting now!
    one
    two
    three
    done!

*/
