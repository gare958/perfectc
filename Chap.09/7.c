#include <stdio.h>
#include <math.h>

int cnt;

int gohome(unsigned long long k){
    int j = 0;
    while(k / 10 > 0){
        j += k % 10;
        k = k / 10;
    }
    if(k / 10 == 0){
        j += k;
    }
    return j;
}

int main()
{
    unsigned long long n = 0;
    unsigned long long m = 0;
    scanf("%llu %llu", &n, &m);
    for(unsigned long long i = n; i <= m; i++){
        if(sqrt(gohome(i)) == (int)sqrt(gohome(i))){
            cnt++;
        }
    }
    printf("%d", cnt);
}