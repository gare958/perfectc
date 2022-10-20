#include <stdio.h>
#define MAX 1000000
#include <math.h>

int sieve[MAX];
int cnt;

void eratosthenes(int n){
    for (int i = 2; i <= n; i++)
        sieve[i] = 1;

    int sqrtn = (int)sqrt(n);
    for (int i = 2; i <= sqrtn; i++){
        if (sieve[i] == 1){
            for(int j = i * i; j <= n; j += i)
                sieve[j] = 0;
        }
    }
}

int gold(int n){
    for(int i = 3; i <= n / 2; i++){
        if(sieve[i] && sieve[n - i]){
            printf("%d %d \n", i, n - i);
        }
    }
}

int gold_2(int n){
    for(int i = 3; i <= n / 2; i++){
        if(sieve[i] && sieve[n - i]){
            cnt++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    eratosthenes(n);
    gold_2(n);
    if(cnt >= 100){
        printf("%d", cnt);
    }
    else{
        gold(n);
    }
}