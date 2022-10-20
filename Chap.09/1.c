#include <stdio.h>

unsigned long long gcd(unsigned int n, unsigned int m){
    if(m == 0){
        return n;
    }
    else{
        return gcd(m, n % m);
    }
}
unsigned long long lcm(unsigned int n, unsigned int m){
    return n * m / gcd(n, m);
}

int main() {
    unsigned long long n, m;
    scanf("%llu %llu", &n, &m);
    printf("%llu\n%llu", gcd(n, m), lcm(n, m));
}