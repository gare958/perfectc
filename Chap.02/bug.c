#include <stdio.h>

int main() {
    char a, b;
    printf("Input two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d", a, b, a + b);
}