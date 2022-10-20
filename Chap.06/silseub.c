#include <stdio.h>

int main()
{
    int q=0;
    char a, b;
    scanf("%c %c", &a, &b);
    q += ((a^b)>>0) & 1;
    q += ((a^b)>>1) & 1;
    q += ((a^b)>>2) & 1;
    q += ((a^b)>>3) & 1;
    q += ((a^b)>>4) & 1;
    q += ((a^b)>>5) & 1;
    q += ((a^b)>>6) & 1;
    q += ((a^b)>>7) & 1;
    printf("%d", q);
}