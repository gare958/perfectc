#include <stdio.h>
#include <math.h>

int prime(unsigned int n){
    int k = 0;
    if((long long)sqrt(n) == sqrt(n)){
        k -= 1;
    }
    for (int i = 1 ; i <= sqrt (n) ; i++){
        if (n % i == 0)
            k += 2;
    }
    return k;
}

int main() {
    unsigned int m, n, I, t;
    long long max = 0, cnt = 0;
    scanf("%u %u", &n, &m);
    for(unsigned int i = n; i <= m; i++){
        i++;
        I = prime(i); 
        if(I >= t){
            cnt = I;
            max = i;
            t = I;
        }
    }
    printf("%llu\n%u", max, cnt);
}