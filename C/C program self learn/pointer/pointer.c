#include <stdio.h>

int main(void)
{
    int * p;
    int i = 55;
    int k;
    int g;

    p = &i; 
 //   g = p; 错误 int类型不能存储整形变量
    k = *p;
    
    printf("%d\n", *p); //*p = i
    printf("%p\n", p);

    printf("%d\n", k);

}
