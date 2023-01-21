#include <stdio.h>

int main()
{
	int dice[3];
	int price;
	int large_data = 0;
	int flag = 0;
	
	// 주사위값 입력
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &dice[i]);
		if(large_data < dice[i])
		{
			large_data = dice[i];
		}
	}
	
	// 같은 눈이 3개일 경우
	if(dice[0] == dice[1])
	{
		if(dice[1] == dice[2])
		{
			if(dice[0] == dice[2])
			{
				price = 10000 + dice[0] * 1000;
				flag = 1;
			}
		}
	}
	
	// 같은 눈이 없을 경우
	else if(dice[0] != dice[1])
	{
		if(dice[1] != dice[2])
		{
			if(dice[0] != dice[2])
			{
				price = large_data * 100;
				flag = 1;
			}
		}
	}
	
	// 같은 눈이 2개일 경우
	if(!flag)
	{
		printf("DEBUG");
		int same_data;
		
		if(dice[0] == dice[1])
		{
			same_data = dice[0];
		}
		
		else if(dice[1] == dice[2])
		{
			same_data = dice[1];
		}
		
		else
		{
			same_data = dice[0];
		}
		
		price = 1000 + same_data * 100;
	}
	
	printf("%d", price);
	return 0; 
}