#include <stdio.h>
#include <math.h>

unsigned long long total, max, max_n;

unsigned long long prime(unsigned long long n){
    for(unsigned long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 1;
        }
    }
    return 0;
}

unsigned long long soinsu(unsigned long long n){
    if(prime(n)){
        unsigned long long a = n;
        for(unsigned long long i = 2; i <= sqrt(n); i++){
            while(a % i == 0){                
                a /= i;
                total += i;
            }
        }
        if(a != 1){
            total += a;
        }
        if(total > max){
            max = total;
            max_n = n;
        }
        total = 0;
    }
}

int main(){
    unsigned long long n, m;
    scanf("%llu %llu", &n, &m);
    for(unsigned long long i = n; i <= m; i ++){
        soinsu(i);
    }
    printf("%llu\n", max_n);
    printf("%llu", max);
}