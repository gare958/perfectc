#include <stdio.h>

int sum(int ary[], int SIZE);

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };

	int arySize = sizeof(point);
	printf("메인에서 배열 전체크기: %d\n", arySize);
	int aryLength = arySize / sizeof(int);

	int s = 0;
	for (int i = 0; i < aryLength; i++)
		s += point[i];

	printf("메인에서 구한 합은 %d\n", s);
	printf("sum(): %d\n", sum(point, aryLength));
	printf("sum(): %d\n", sum(&point[0], aryLength));

	return 0;
}

int sum(int ary[], int SIZE)
{
	int s = 0;
	printf("함수에서 배열 크기: %d\n", (int)sizeof(ary));
	for (int i = 0; i < SIZE; i++)
	{
		s += ary[i];
	}

	return s;
}