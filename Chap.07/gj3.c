#include <stdio.h>

int main()
{
    unsigned long long n;
    int a = 0;
    int b = 0;
    scanf("%llu", &n);
    while(n>0){
        if(n & 1 == 1){
            a++;
        }
        else{
            b++;
            }
        n=n>>1;    
    }
    printf("%d\n", a);
    printf("%d",b);
}