#include <stdio.h>

unsigned sum(unsigned n, unsigned s) {
    if (n == 1){
        return 1 + s;
    }
    else   
        return sum(n - 1, s + n);
}

int main() {
    unsigned int a;
    scanf("%u", &a);
    printf("%u\n", sum(a, 0)); // gcc -O2 로 컴파일(최적화)
}