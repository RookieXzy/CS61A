/*
    2023��8��19��23:25:14
    Ŀ�ģ��㶮������ double���� �˽����Լ�ʮ������
    C primer plus ��ϰ��
*/

#include <stdio.h>

int main(void)
{
    float value;
    printf("Please Enter a floating-point value:");
    scanf("%f", &value);
    printf("Fixed-point value notation:%lf\n", value);
    printf("exponential notation:%e\n", value);// %e��ʾ��ָ������ʽ�����%e��ָ��������Ʒ�
    printf("octal value:%o\n", value);//�˽����������ԭ��δ֪
    printf("p notation:%a\n", value);

    return 0;
}

