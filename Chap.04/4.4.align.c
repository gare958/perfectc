#include <stdio.h>

int main()
{
    int year = 1999;
    printf("    1234567890\n");
    printf("C99 %8d\n", year);
    printf("C99 %+8d\n", year);
    printf("C99 %-8d\n", year);
    printf("C99 %-+8d\n", year);

    float pi = 3.141592f;
    printf("    1234567890\n");
    printf("PI= %10f\n", pi);
    printf("PI= %10.3f\n", pi);
    printf("PI= %.3f\n", pi);
    printf("PI= %-10.4f\n", pi);
}
