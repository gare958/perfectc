#include <stdio.h>

int main(){
    int a[] = {10, 20, 30, 40, 50};
    int *p = a, *q = a;
    *p += 1;
    printf("%d %d", *(p + 1), *q + 1);
}