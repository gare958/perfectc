#include <stdio.h>

int main()
{
    printf("%d, %d\n", 0b10, 0b1010);
    printf("%d, %d\n", 010, 015);
    printf("%d, %d\n", 10, 15);
    printf("%d, %d\n", 0x10, 0x15);

    printf("%f, ", 3.141592);
    printf("%f, ", 3.141592e+2);
    printf("%f\n", 3.141592e-2);
    printf("%4.2f\n", 3.141592e+2);
}