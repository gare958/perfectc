#include <stdio.h>
#define MAX 1000000
#include <math.h>

int sieve[MAX];

void eratosthenes(int n){
    for (int i = 2; i <= n; i++)
        sieve[i] = 1; // 2부터 n까지 초기화

    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++){
        if (sieve[i] == 1){ // i는 소수임.
            for(int j = i * i; j <= n; j += i)
                sieve[j] = 0; // i의 배수는 소수 아님.
        }
    }
}

int main()
{
    eratosthenes(10);
    for(int i = 2; i <= 10; i++){
        if (sieve[i] == 1)
            printf("%d ", i);
    }
}