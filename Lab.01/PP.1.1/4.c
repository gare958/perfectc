#include <stdio.h>
#define MAX 10000000
#include <math.h>

int sieve[MAX];

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
    printf("%d\n", sieve[5]);
}

int cnt;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    eratosthenes(m);
    for(int i = n; i <= m; i++){
        if (sieve[i] == 1)
            cnt++;
    }
    printf("%d", cnt);
}