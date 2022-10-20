#include <stdio.h>

int main()
{
    int x = 10, y = 20;
    // swap x and y here with XOR oeprator
    // without temporary variable
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("%d %d", x, y);
}