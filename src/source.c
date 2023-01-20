#include <stdio.h>

int main()
{
	int hour;
	int minuate;
	int cook_time;
	
	scanf("%d", &hour);
	scanf("%d", &minuate);
	scanf("%d", &cook_time);
	
	minuate += cook_time;
	
	if(minuate >= 60)
	{
		hour += minuate / 60;
		minuate %= 60;
	}
	
	if(hour >= 24)
	{
		hour -= 24;
	}
	
	printf("%d %d", hour, minuate);
	
	return 0;
}