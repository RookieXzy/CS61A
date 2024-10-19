#include <stdio.h>

int main(void)
{
	int lines = 3;
	char ch;
	scanf("%c", &ch);

	for(int i = 1; i <= lines; i++)
	{
		for(int j = 1; j <= lines - i; j++)
			printf(" ");
		for(int k = 1; k <= i; k++)
			printf("%c", ch);
		for(int l = 1; l < i; l++)
			printf("%c", ch);

		printf("\n");
	}

	return 0;
}
