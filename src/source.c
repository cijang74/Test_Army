// 알고리즘의 종류 사이트
// https://hyo-ue4study.tistory.com/68

#include <stdio.h>

int main()
{
	int numbers[6];
	int min = 0;
	int temp = 0;
	int avg = 0;
	int mdn = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &numbers[i]);
		avg += numbers[i];
	}
	
	// 선택 정렬 알고리즘: 오름차순 정렬
	for(int i = 0; i < 4; i++)
	{
		// 처음에 비교할 수를 min으로 지정한다.
		min = i;
		
		// 처음에 비교할 수의 앞의 수 부터 탐색한다.
		for(int j = i + 1; j < 5; j++)
		{
			// 만약 위에서 지정한 값보다 더 작은 수를 찾았다면 그 수로 min을 지정
			if(numbers[j] < numbers[min])
			{
				min = j;
			}
		}
		
		temp = numbers[i];
		numbers[i] = numbers[min];
		numbers[min] = temp;
	}
	
	avg /= 5;
	mdn = numbers[2];
	
	printf("%d\n", avg);
	printf("%d", mdn);
	
	return 0;
}