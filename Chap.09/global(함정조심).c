#include <stdio.h>

int n;

int main()
{
    int n = 10;
    for (int i = 0; i < 10; i++){
        int n = 20; // 블락 안에서 선언된 변수는 그 안에서만 적용됨. i와 마찬가지
        n += i;
    }
    printf("%d\n", n);
}