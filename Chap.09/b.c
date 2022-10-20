#include <stdio.h>
#include <math.h>

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

int main(){
    int k = 0, n;
    unsigned int a;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%u", &a);
        k += (prime(a)) * pow(2, n - i);        
    }
    printf("%X", k);
}