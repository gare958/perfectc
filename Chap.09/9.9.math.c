#include <stdio.h>
#include <math.h> //수학 관련 다양한 함수헤더 포함 헤더파일 

int main(void)
{
	printf("  i   i제곱   i세제곱  제곱근(sqrt)\n");
	printf("------------------------------------\n");
	for (int i = 3; i < 7; i++)
		printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i, 2), pow(i, 3), sqrt(i));
	printf("\n");

	printf("%5.2f, ", exp(1.0));
	printf("%5.2f, ", pow(3.14, 1.0));
	printf("%5.2f\n", sqrt(81));
	printf("%5.2f, ", ceil(3.6));
	printf("%5.2f, ", floor(5.8));
	printf("%5.2f\n, ", fabs(-10.2));

	return 0;
}
