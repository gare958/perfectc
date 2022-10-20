#include <stdio.h>

unsigned long long gcd(unsigned long long n, unsigned long long m){
    if(m == 0){
        return n;
    }
    else{
        return gcd(m, n % m);
    }
}
unsigned long long lcm(unsigned long long n, unsigned long long m){
    return n * m / gcd(n, m);
}

int main() {
    int A[100] = {0};
    int n = 0;
    unsigned long long LCM = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n; i++){
        if(i == 0){
        LCM = lcm(A[0], A[1]);
        }
        else{
            LCM = lcm(A[i], LCM);
        }
    }
    printf("%llu", LCM);
}