#include <stdio.h>

int main()
{
	int count = 1;

loop:
	printf("%3d", count);
	if (++count <= 10)
		goto loop;

	printf("\nÁ¾·á\n");
}