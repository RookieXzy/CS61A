/*2024年1月14日16:38:40*/

#include <stdio.h>
#define COVERAGE 350
int main(void)
{
    int sq_feet;
    int cans;

    printf("how many square you want to cover?\n");
    while(scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;//面积除以一桶的覆盖面积，如果有余，则需要加1。
        printf("you need %d %s to paint your room\n", cans, (cans == 1) ? "can" : "cans");
        printf("Enter next value:\n");
    }

    return 0;
}