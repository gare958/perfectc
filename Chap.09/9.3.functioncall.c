#include <stdio.h> 

int add(int a, int b);
int findMax(int, int);
void printMin(int, int);

int main(void)
{
	int a = 10, b = 15;

	int max = findMax(a, b);
	printf("최대: %d\n", max);
	printf("합: %d\n", add(a, b));

	//반환 값이 없는 함수호출
	printMin(a, b);
}
