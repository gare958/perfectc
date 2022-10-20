#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long n = 0;
    scanf("%llu", &n);
    unsigned long long c = pow(2, 32) - 1;
    unsigned long long a = 1;
    unsigned long long b = 1;
    unsigned long long t = 0;
    for(unsigned long long i = 3; i <= n; i++){
        unsigned long long t = (b + a) % c;
        a = b;
        b = t;
    }
    printf("%llu", b);
}