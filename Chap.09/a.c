#include <stdio.h>
#include <math.h>

int prime(unsigned int n){
    for (int i = 2 ; i <= sqrt (n) ; i++){
        if (n % i == 0)
            return 0;
    }
}

int main() {
    unsigned int n;
    scanf("%d", &n);
    if(n == 1)
        printf("not prime");
    
    else if(prime(n) == 0)
        printf("composite");
    else
        printf("prime");
}