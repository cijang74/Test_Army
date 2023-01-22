//1. 1~30까지의 합을 구한다
//2. (1)에서 구한 값과 입력받은 값의 합 두 개의 차를 구한다.
//3. 배열의 처음부터 돌아가면서 1을 찾는다.
//4. 1이 배열에 있다면 다시 처음으로 돌아가 2를 찾는다.
//5. 반복하여 없는 수까지를 찾는다.
//6. 없는 수를 찾았다면 두번째 없는 수는 (2)에서 구한 값과 (5)에서 구한 값의 차다.

#include <stdio.h>

int calculate_addNum(int student_num, int add_num)
{
	if(student_num == 0)
	{
		return add_num;
	}
	
	else
	{
		add_num += student_num;
		calculate_addNum(student_num -1, add_num);
	}
}

int main()
{
	int student_num = 30;
	int add_num = 0;
	int student_arr [28];
	int sum_arr = 0;
	int key;
	int flag = 0;
	int x;
	
	add_num = calculate_addNum(student_num, add_num);
	
	for(int i = 0; i < 28; i++)
	{
		scanf("%d", &student_arr[i]);
		sum_arr += student_arr[i];
	}
	
	key = add_num - sum_arr;
	
	// 1이 배열에 있다면 다시 처음으로 돌아가 2를 찾는다.
	for(int i = 0; i < 28; i++)
	{
		flag = 0;
		
		for(int j = 0; j < 28; j++)
		{
			
			if(student_arr[j] == i+1) // 만약 1이 배열에 있다면
			{
				flag = 1;
				break;
			}
			
		}
		
		if(flag == 0)
		{
			x = i+1; // 없는 수 구하기
			break;
		}
	}
	
	
	printf("%d\n", x);
	printf("%d", (key - x));
	
	return 0;
}