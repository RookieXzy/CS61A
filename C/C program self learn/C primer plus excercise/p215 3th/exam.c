//2024��1��14��16:51:51

#include <stdio.h>

int main(void)
{
    int input;
    int even = 0;//ͳ��ż��
    int odd = 0;//ͳ������
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter a integer to check it\n");
    while(scanf("%d", &input) == 1 && input != 0)
    {
        if(input % 2 == 0)
        {    
            even++;
            even_sum += input;
        }
        else
        {
            odd++;
            odd_sum += input;
        }
        printf("enter a integer to continue,0 to quit\n");
    }
    
    printf("Total have %d odd numebrs, %d even numbers, the odd numbers's average is %f, the even numbers's average is %f", 
            odd, even, (float)(odd_sum / odd), (float)(even_sum / even));

    return 0;
}
