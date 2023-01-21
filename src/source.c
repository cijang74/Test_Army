#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;
	int search_num;
	int count = 0;
	
	scanf("%d", &size);
	
	int* arr = (int*)malloc(sizeof(int) * size);
	
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	scanf("%d", &search_num);
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == search_num)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}