#include <stdio.h>
#include <ctype.h>

#define STOP '#'
#define SPACE ' '
int main(void)
{
	printf("Enter something to check it out! :\n");
	
	
	
	char c;
	int i_space = 0,
		i_byte = 0,
		i_line = 0;
	while ((c = getchar()) != STOP)
	{
		if (c == '\n')
			i_line++;
		else if (c == SPACE)
			i_space++; 
		else
			i_byte++;
	}
	
	printf("һ����%d���ո� %d�� %d���ַ�", i_space, i_line, i_byte);
}
