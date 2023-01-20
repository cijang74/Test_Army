#include <stdio.h>

int main()
{
	int chess_pice[6]; // 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수
	
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &chess_pice[i]);
	}
	
	chess_pice[0] -= 1;
	chess_pice[1] -= 1;
	chess_pice[2] -= 2;
	chess_pice[3] -= 2;
	chess_pice[4] -= 2;
	chess_pice[5] -= 8;
	
	for(int i = 0; i < 6; i++)
	{
		chess_pice[i] *= -1;
		if(i == 5)
		{
			printf("%d", chess_pice[i]);
		}
		
		else
		{
			printf("%d ", chess_pice[i]);
		}
	}
	
	return 0;
}