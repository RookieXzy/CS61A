//2023Äê8ÔÂ23ÈÕ15:19:25 


#include <stdio.h>

int main(void)
{
	float a;
	printf("Enter a float decimal:");
	scanf("%f", &a);
	printf("A.the input is %.1f or %.1e\n", a, a);
	printf("B.The input is %+.3f or %.3E\n", a, a);
	
	return 0;
	
}
/*
#include <stdio.h>

int main(void)
{
    double num;

    printf("Please enter a floating-poing value: ");
    scanf("%lf", &num);
    printf("a. The input is %.1f or %.1e.\n", num, num);
    printf("b. The input is %+.3f or %.3E.\n", num, num);

    return 0;
}


*/ 
