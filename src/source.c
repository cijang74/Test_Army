#include <stdio.h>

int main()
{
	int full_price;
	int kind_of_buyed;
	int price;
	int num;
	int temp = 0;
	
	scanf("%d", &full_price);
	scanf("%d", &kind_of_buyed);
	
	for(int i = 0; i < kind_of_buyed; i++)
	{
		scanf("%d", &price);
		scanf("%d", &num);
		temp += price * num;
	}
	
	if(full_price == temp)
	{
		printf("Yes");
	}
	
	else
	{
		printf("No");
	}
	
	return 0;
}