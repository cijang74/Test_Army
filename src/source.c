#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,M;
	scanf("%d", &N);
	scanf("%d", &M);
	
	// 2차원 배열 동적할당 (행렬 A)
	int **arr1 = (int**)malloc(sizeof(int*) * N);
	for(int i = 0; i < N; i++)
	{
		arr1[i] = (int*)malloc(sizeof(int) * M);
	}
	
	// 2차원 배열 동적할당 (행렬 B)
	int **arr2 = (int**)malloc(sizeof(int*) * N);
	for(int i = 0; i < N; i++)
	{
		arr2[i] = (int*)malloc(sizeof(int) * M);
	}
	
	// 2차원 배열 동적할당 (행렬 A+B를 저장할 행렬C)
	int **arr3 = (int**)malloc(sizeof(int*) * N);
	for(int i = 0; i < N; i++)
	{
		arr3[i] = (int*)malloc(sizeof(int) * M);
	}
	
	for(int i = 0; i < N; i++) // 행렬A의 원소 입력
	{
		for(int j = 0; j < M; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	
	for(int i = 0; i < N; i++) // 행렬B의 원소 입력
	{
		for(int j = 0; j < M; j++)
		{
			scanf("%d", &arr2[i][j]);
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for(int i = 0; i < N; i++) // 행렬B의 원소 입력
	{
		for(int j = 0; j < M; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		if(i < N-1)
		{
			printf("\n");
		}
	}
	
	// 동적 할당 해제
	for(int i = 0; i < N; i++)
	{
		free(arr1[i]);
	}
	free(arr1);
	
	for(int i = 0; i < N; i++)
	{
		free(arr2[i]);
	}
	free(arr2);
	
	for(int i = 0; i < N; i++)
	{
		free(arr3[i]);
	}
	free(arr3);
	
	return 0;
}