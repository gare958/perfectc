#include <stdio.h>

int main(){
    int a = 0x65000000;
    char *p = (char *)&a;
    printf("%x %p\n", a, &a);
    printf("%p %x\n", p, *(p + 3));
}