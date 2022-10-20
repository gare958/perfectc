#include <stdio.h>

int main()
{
    unsigned long long n, a;
    int b = 0;
    scanf("%llu", &n);
    while (n > 0)
    {   
        if (b == 0 && n % 10 == 0){
            n = n / 10;
            continue; 
        }
        b = 1;
        a = n % 10;
        n = n / 10;
        printf("%d", a);
    }       
}