#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b =t;
    printf("%d %d\n", *a, *b);
}
int main(){
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}