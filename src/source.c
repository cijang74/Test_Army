#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r, int* arr, int count) // 팰린드롬인지 검사하는 알고리즘
{ // s는 문자열, l은 처음 시작 위치, r은 마지막 위치
	count++;
	
    if(l >= r) // 만약 양 끝을 좁혀나갔을 떄 끝나는 지점이 엇나가거나 같으면
	{
		arr[0] = 1;
		arr[1] = count;
		return 1; // 2번쨰 if문에 걸리지 않았으므로 이는 팰린드롬 수이다.
	}
	
    else if(s[l] != s[r]) // 양 끝 수들을 비교하여 검사한다. 만약 틀리면 끝.
	{
		arr[0] = 0;
		arr[1] = count;
		return 0;
	}
	
    else // 아직 읽을 단어가 남았고, 전의 경우에서 틀린 경우가 없었다면 계속 반복
	{
		return recursion(s, l+1, r-1, arr, count);
	}
}


int main()
{
	int test_case = 0;
	char Strings[1001];
	int arr[3] = {0,0,0};
	
	scanf("%d", &test_case);
	
	for(int i = 0; i < test_case; i++)
	{
	scanf("%s", Strings);
	recursion(Strings, 0, strlen(Strings)-1, arr, 0);
	
    printf("%d %d\n", arr[0], arr[1]);
	}
	
	return 0;
}