#include <stdio.h>

#define MAX 3
#define INCREMENT 10

int main()
{
	double celsius = 12.46;

	printf("  섭씨(C)  화씨(F)\n");
	for (int i = 1; i <= MAX; i++, celsius += INCREMENT)
	{
		printf("%8.2f %8.2f\n", celsius, 9.0 / 5 * celsius + 32);
	}
}