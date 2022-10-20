#include <stdio.h>
#include <math.h>

long long prime(unsigned long long n){
    long long sum = 0;
    for (long long i = 1 ; i <= sqrt (n) ; i++){
        if (i == sqrt(n) && n % i == 0){
            sum += i;
        }
        else if (n % i == 0){
            sum += i;
            sum += n / i;
        }           
    }
    return sum;
}

int main() {
    unsigned long long n;
    scanf("%llu", &n);
    printf("%llu", prime(n));
}