#include <stdio.h>
#include <math.h>

int cnt;
unsigned int r;

unsigned int next_r(){
    r = (214013u * r + 2531011u) % 0xFFFFFFFFu;
    return r;
}

int prime(unsigned int n){
    if( n == 1){
        return 0;
    }
    for (int i = 2 ; i <= sqrt (n) ; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned int n = 0;
    scanf("%ld %ld", &r, &n);

    for(int i = 0; i < n; i++){
        if(prime(r) == 1){
            cnt++;
        }
        next_r();
    }
    printf("%d", cnt);
}