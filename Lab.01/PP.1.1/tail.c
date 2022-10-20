#include <stdio.h>

unsigned sum(unsigned n) {
    if (n == 1){
        return 1;
    }
    else   
        return n + sum(n - 1);
}

int main() {
    printf("%u\n", sum(10000000)); // stack overflow
}