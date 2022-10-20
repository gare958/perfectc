#include <stdio.h>

int main()
{
	int m, n;
	for (m = 1; m <= 5; m++)
	{
		printf("m = %-2d\n", m);
		for (n = 1; n <= 7; n++)
			printf("n = %-3d", n);
		puts("");
	}
}