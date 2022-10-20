#include <stdio.h>

int main()
{
    printf("       char: %d   \n", sizeof(char));
    printf("        int: %d %d\n", sizeof(int), sizeof(200));
    printf("       long: %d %d\n", sizeof(long), sizeof(900L));
    printf("  long long: %d %d\n", sizeof(long long), sizeof(900LL));
    printf("      float: %d %d\n", sizeof(float), sizeof 3.14F);
    printf("     double: %d %d\n", sizeof(double), sizeof 3.14L);
    printf("long double: %d %d\n", sizeof(long double), sizeof 3.14L);

    short s = 32767;
    printf("%d\n", s);
    s = s + 1; // overflow
    printf("%d\n", s); 
}