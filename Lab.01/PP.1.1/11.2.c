#include <stdio.h>
#include <math.h>

int a, cnt;

int soinsu(unsigned long long n){
    for(unsigned long long i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            n = n / i;
            a++;
            cnt++;
        }
        if(cnt != 0){
            printf("%llu %d\n", i, cnt);
            cnt = 0;
        }
    }
    if(n != 1){
        printf("%llu %d", n, 1);
    }
}

int main(){
    unsigned long long n;
    scanf("%llu", &n);
    soinsu(n);
}