/*
2023Äê8ÔÂ24ÈÕ14:25:48 
*/

#include <stdio.h>
#include <float.h>

int main(void)
{
	float a = 1.0 / 3.0;
	double b = 1.0 / 3.0;
	
	printf("%.3f   %.6f   %.12f   %.16f\n", a, a, a, a);
	printf("%.3lf   %.6lf   %.12lf   %.16lf\n", b, b, b, b);
	
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	
	return 0;
}
