#include <stdio.h> 

// n!을 구하는 꼬리 재귀 함수
int factorial(int number, int fact)
{
	if (number == 1)
		return fact;
	else
		return factorial(number - 1, number * fact);
}

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i, 1));

	return 0;
}
