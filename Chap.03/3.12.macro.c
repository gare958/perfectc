#include <stdio.h>
#include <limits.h>

#define PI 3.141592

int main()
{
    printf("          char: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsinged short: %d ~ %d\n", 0, USHRT_MAX);
    printf("           int: %d ~ %d\n", INT_MIN, INT_MAX);
    printf("     long long: %d ~ %d\n", LLONG_MIN, LLONG_MAX);

    float pi = PI; // 자동 형변환에 유의할 것.
    printf("PI = %f", pi);
}