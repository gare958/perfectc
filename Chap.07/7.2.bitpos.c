#include <stdio.h>

int main()
{
	int num = 13;
	printf("정수 %d의 오른쪽 8비트 내부 값:\n", num);

	printf("%d", (num >> 7) & 1); //오른쪽 8번째 비트 값 출력
	printf("%d", num >> 6 & 1); //오른쪽 7번째 비트 값 출력
	printf("%d", num >> 5 & 1);
	printf("%d ", num >> 4 & 1);
	printf("%d", num >> 3 & 1);
	printf("%d", num >> 2 & 1);
	printf("%d", num >> 1 & 1);
	printf("%d\n", num >> 0 & 1); //오른쪽 첫 비트 값 출력
}