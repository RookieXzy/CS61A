#include <stdio.h>

int main(void)
{
    int * p;
    int i = 55;
    int k;
    int g;

    p = &i; 
 //   g = p; ���� int���Ͳ��ܴ洢���α���
    k = *p;
    
    printf("%d\n", *p); //*p = i
    printf("%p\n", p);

    printf("%d\n", k);

}
