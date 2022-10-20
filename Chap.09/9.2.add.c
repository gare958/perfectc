#include <stdio.h> 

//int add(int a, int b);	//이 위치도 가능

int main(void)
{
	int a = 3, b = 5;
	int add(int a, int b);	//int add(int, int) 도가능

	//위 함수원형이 없으면 함수호출에서 경고 발생
	int sum = add(a, b);
	printf("합: %d\n", sum);

	return 0;
}

//함수 add의 함수구현 또는 함수정의 부분
int add(int a, int b)
{
	int sum = a + b;

	return (sum); //괄호는 생략 가능
}

//위 main() 함수에서 호출이 없으므로 이 함수구현은 실행되지 않음
int findMin(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
