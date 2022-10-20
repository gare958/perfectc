#include <stdio.h>

extern float add(float, float);

int main() {
    int a = 10, b = 20;
    printf("%d\n", add(a, b));
}

float add(float a, float b) {
    return a + b;
}