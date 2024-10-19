#include <stdio.h>

int main(void)
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int i, j;
    int c;

    i = 0;
    j = 6;
    while(i < j)
    {
        c = a[i];
        a[i] = a[j];
        a[j] = c;


        i++;
        j--;
    }

    for(i = 0; i<=6; i++)
        printf("%d", a[i]);

}
