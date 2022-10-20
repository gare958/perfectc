#include <stdio.h>
#include <math.h>

int prime(unsigned int n){
    for (int i = 2 ; i <= sqrt (n) ; i++){
        if (n % i == 0)
            return 0;
    }
}

int main() {
    unsigned int n, m;
    int k = 0;
    scanf("%d %d", &n, &m);
    for (unsigned int a = n; a <= m; a++){
        if(a != 1 && prime(a) != 0)
            k += 1;
    }
    printf("%d", k);
}