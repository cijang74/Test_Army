// 알고리즘의 종류 사이트
// https://hyo-ue4study.tistory.com/68

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	scanf("%d", &size);
	
	int* arr = (int*)malloc(sizeof(int) * size);
	
	int min;
	int temp;
	
	// 배열 입력
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	// 선택 정렬 알고리즘: 
	for(int i = 0; i < size - 1; i++)
	{
		min = i;
		for(int j = i + 1; j < size; j++)
		{
			if(arr[j] < arr[min]) // 만약 배열에서 j가 최솟값보다 작다면
			{
				min = j; // j가 이제부터 최솟값이다.
			}
		}
		
		// 위치 바꿔주기: 최솟값을 앞으로 옮겨줌.
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	
	// 배열 출력
	for(int i = 0; i < size; i++)
	{
		if(i == size - 1)
		{
			printf("%d", arr[i]);
		}
		
		else
		{
			printf("%d\n", arr[i]);
		}
	}
	
	free(arr);
	
	return 0;
}