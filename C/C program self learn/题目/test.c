#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(char *a, char *b);

int main(void)
{
    srand((unsigned)time(NULL));
    int rand_x;
    int a,b;
    char poker[8] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D'};
    rand_x = (rand() % 100) + 1;
    for(int i = 0; i < rand_x; i++)
    {
        swap(&poker[0], &poker[7]);
        swap(&poker[0], &poker[1]);
        swap(&poker[1], &poker[2]);
        swap(&poker[2], &poker[3]);
        swap(&poker[3], &poker[4]);
        swap(&poker[4], &poker[5]);
        swap(&poker[5], &poker[6]);
    }
        
}


void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}