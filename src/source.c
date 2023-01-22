#include <stdio.h>

int main()
{
	int arr[10][10];
	int max = -1;
	int x,y;
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
			
			if(arr[i][j] > max)
			{
				max = arr[i][j];
				x = i+1;
				y = j+1;
			}
		}
	}
	
	printf("%d\n", max);
	printf("%d %d", x, y);
	
	return 0;
}