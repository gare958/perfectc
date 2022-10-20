#include <stdio.h>

int main()
{
	double gpa;

	printf("평균평점 입력: ");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
		printf("최우등\n");
	else if (gpa >= 3.8)
		printf("우등\n");
	else if (gpa >= 3.0)
		printf("우수\n");
	else
		printf("3.0 미만\n");
}