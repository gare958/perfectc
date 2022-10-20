#include <stdio.h>

int max;
unsigned long long k;

unsigned long long collatzz(unsigned long long n){
    int cnt = 0;
    while(n>1){       
        cnt += 1;
        if(n % 2 == 0){
            printf("%llu ", n);
            n = n / 2;
        }
        else{
            printf("%llu ", n);
            n = 3 * n + 1;
        }
    }
    if(n == 1){
        printf("%d", 1);
    }
    return cnt;
}

unsigned long long collatz(unsigned long long n){
    int cnt = 0;
    while(n > 1){       
        cnt += 1;
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3 * n + 1;
        }
    }
    if(n == 1){
        cnt += 1;
    }
    return cnt;
}

int main()
{
    unsigned long long n = 0;
    unsigned long long m = 0;
    scanf("%u %u", &n, &m);
    for(unsigned long long i = n; i <= m; i++){
        if(collatz(i) >= max){
            max = collatz(i);
            if(i > k){
                k = i;
            }
        }
    }
    printf("%llu\n", k);
    printf("%d\n", max);
    collatzz(k);
}