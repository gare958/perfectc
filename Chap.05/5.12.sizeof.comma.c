#include <stdio.h>

int main()
{
	int a, x;
    a = x = 0;

    x = 3 + 4, 2 * 3;
    printf("x = %d", x);
    x = (3 + 4, 2 * 3);
    printf("x = %d", x);

	int byte = sizeof (double);
	printf("double 형: %d bytes, %d bits\n", byte, byte * 8);

	int bit = (byte = sizeof a, byte * 8);
	printf("int 형: %d bytes, %d bits\n", byte, bit);
}