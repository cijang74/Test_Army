// 알고리즘의 종류 사이트
// https://hyo-ue4study.tistory.com/68

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int people_num;
	int award_num;
	int min;
	int temp;
	int* arr;
	
	scanf("%d", &people_num);
	scanf("%d", &award_num);
	
	arr = (int*)malloc(sizeof(int) * people_num);
	
	for(int i = 0; i < people_num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < people_num - 1; i++)
	{
		min = i;
		for(int j = i + 1; j < people_num; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	
	printf("%d", arr[people_num - award_num]);
	
	return 0;
}