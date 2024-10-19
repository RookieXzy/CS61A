#include <stdio.h>

int main(void)
{
	float speed,
		  volume,
		  time;
	printf("Enter your Download speed(Mb/s):");
	scanf("%f", &speed);
	printf("Enter the file volume you want to download:");
	scanf("%f", &volume);
	
	time = volume / speed * 8;
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, volume);
	printf("downloads in %.2f seconds", time);
	
	return 0;
}
