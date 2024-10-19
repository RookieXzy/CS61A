#include <stdio.h>

void display(char cr, int lines, int width);
int main(void)
{
    int ch;
    int row,col;
    printf("Enter one character and two integer:\n");
    while((ch = getchar()) != '\n')
    {
        scanf("%d %d", &row, &col);
        display(ch, row, col);
        while(getchar() != '\n')
            continue;
        printf("press anther character and two integer:\n");
        printf("Enter a new line to quit:");
    }

    printf("bye!\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row,col;
    for(row = 1; row <= lines; row++)
    {
        for(col = 1; col <= width; col++)
        {
            putchar(cr);
        }
        printf("\n");
    }
}