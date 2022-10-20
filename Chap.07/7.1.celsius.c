#include <stdio.h>

int main()
{
	double celsius = 12.46;

	printf("  섭씨(C)  화씨(F)\n");
	printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);
	celsius += 10;
	printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);
	celsius += 10;
	printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);
}