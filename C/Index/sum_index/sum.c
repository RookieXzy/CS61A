#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 64, 129, 100, 20, 11, 12};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    //����marbles + SIZE ָ�����mabrles��ʮ��Ԫ�صĺ���ĵ�ַ
    printf("The total number of marbles is %ld", answer);

}

int sump(int * start, int * end)
{
    int total;

    while(start < end)//������start < end ��ѭ������ʮ��start�ͺ�end���
    {
        total += *start;
        start++;
        //��ָ��+1��ʱ�� ����ָ����һ���ֽڵĵ�ַ������ָ����һ������Ԫ�صĵ�ַ
    }

    return total;
}

//*marbles + 2  marbles��һ��Ԫ�ص�ֵ��2
//*(marbles + 2) marbles ������Ԫ�ص�ֵ
