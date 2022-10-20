#include <stdio.h>

unsigned long long cnt = 0;
unsigned long long collatz(unsigned long long n){
    if(n == 1){
        cnt++;
        printf("%llu", n);
        return 1;
    }
    else if(n % 2 == 0){
        cnt++;
        printf("%llu ", n);
        return collatz(n / 2);
    }
    else{
        cnt++;
        printf("%llu ", n);
        return collatz(3 * n + 1);
    }
}

int main() {
    unsigned long long n = 0;
    scanf("%llu", &n);
    collatz(n);    
    printf("\n%llu", cnt);
}