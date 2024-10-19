/*
2023Äê8ÔÂ24ÈÕ14:36:33 
*/

#include <stdio.h>

#define GALLON_PER_L  3.785
#define MILE_PER_KM  1.609 

int main(void)
{
	int mileage;
	float gallon;
	
	
	printf("Enter the mileage in your journey:");
	scanf("%d", &mileage);
	printf("Enter the gas in your journey you run out:");
	scanf("%f", &gallon);
	
	printf("When you drive 1mile you will run %.1f gas\n", gallon / mileage);
	
	printf("In other words:");
	printf("%.1f KM/L(USA)         ", 
			mileage * MILE_PER_KM / gallon * GALLON_PER_L);
	printf("%.1f L/KM(EU)", 
			gallon * GALLON_PER_L / mileage * MILE_PER_KM);

}
