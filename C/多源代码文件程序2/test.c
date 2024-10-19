#include <stdio.h>
#include "test.h"

int main(void)
{
    while(hello() == 1)
    {
        printf("nihao\n");
        break;
    }
    return 0;
}