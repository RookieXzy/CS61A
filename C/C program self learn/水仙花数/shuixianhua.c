#include <stdio.h>

int main(void)
{
    int number;
    int a,b,c;
    for(int i = 0; i < 1000; i++)
    {
        a = i /10 /10;
        b = i /10 %10;
        c = i % 10;
        number = a * a * a + b * b * b + c * c * c;
        
        if(number == i)
            printf("��� %d %d %d ��ɵ����� %d ��ˮ�ɻ���\n", a, b, c, number);
    }

    return 0;
}



/*#include <stdio.h>

int cube(int);

int main(void)
{
    int hundred = 1;
    int ten = 0,one = 0; //�洢��λ���ֵ�����
    int number, number_s; // �ж��ǲ���ˮ����
    int a = 3;

    for(int i = 0; i <= 9; i++)
    {
        while(i == 9)
            ten++;
        while(ten == 9)
            hundred++;
        
        number = hundred * 100 + ten * 10 + i;
        number_s = cube(hundred) + cube(ten) + cube(i);


        if(number == number_s && number <= 1000)
            printf("this %d %d %d construct %d \n", i, ten, hundred, number);
    }

    printf("%d", cube(a));
    printf("%d", a);
}


int cube(int a)
{
    int number = a * a * a;
    return number;
}*/

