#include <stdio.h>

int change(int year)
{
	year -= 543;
	return year;
}

int main()
{
	int boolgy_year;
	int defualt_year;
	scanf("%d", &boolgy_year);
	
	defualt_year = change(boolgy_year);
	
	printf("%d", defualt_year);
	return 0;
}