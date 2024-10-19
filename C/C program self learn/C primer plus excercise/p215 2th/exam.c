#include <stdio.h>

#define WELL '#'

int main(void)
{
    char ch;
    int byte = 0;
	
    printf("Enter something to check it(# symbol quit)\n");
    while((ch = getchar())!= WELL)
    {
        printf("'%c' - %d ", ch, ch);
        if(ch = "\n" && ++byte % 8 == 0)
            printf("\n");
    }

    printf("Done");
    return 0;
}
