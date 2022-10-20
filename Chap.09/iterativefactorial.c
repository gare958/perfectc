#include <stdio.h> 

// n!을 구하는 반복함수
int factorial(int number)
{
    int f = 1;
    for (int i = 1; i <= number; i++)
        f *= i;
    return f;
}

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i));

	return 0;
}
