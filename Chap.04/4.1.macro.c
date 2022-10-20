#include <stdio.h>

#define PI 3.14

int main()
{
    double radius = 2.83;

    printf("원 면적: %f\n", radius * radius * PI);
    printf("원 둘레: %f\n", 2 * radius * PI);
}