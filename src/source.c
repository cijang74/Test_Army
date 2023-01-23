#include <stdio.h>
#include <stdlib.h>

int main()
{
	int white_paper[100][100];
	int color_paper = 0;
	int size = 0;
	
	typedef struct Coordinate
	{
		int x;
		int y;
	}coordinate;
	
	scanf("%d", &color_paper);
	
	coordinate* arr = (coordinate*)malloc(sizeof(coordinate) * color_paper);
	
	// 도화지 2차원 배열 초기화
	for(int i = 0; i < 100; i++)
	{
		for(int j = 0; j <= 100; j++)
		{
			white_paper[i][j] = 0;
		}
	}
	
	// 색종이의 xy좌표 입력
	for(int i = 0; i < color_paper; i++)
	{
		scanf("%d", &arr[i].x);
		scanf("%d", &arr[i].y);
	}
	
	// 도화지에 색종이 그리기
	for(int i = 0; i < color_paper; i++)
	{
		for(int j = arr[i].x; j < arr[i].x + 10; j++)
		{
			for(int k = arr[i].y; k < arr[i].y + 10; k++)
			{
				white_paper[j][k] = 1;
			}
		}
	}
	
	// 도화지에 그린 색종이 크기 구하기
	for(int i = 0; i < 100; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			if(white_paper[i][j] == 1)
			{
				size++;
			}
		}
	}
	
	free(arr);
	
	printf("%d", size);
	
	return 0;
}