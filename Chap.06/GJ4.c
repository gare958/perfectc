#include <stdio.h>

int main()
{
    int a, b;
    char op;
    scanf("%c", &op);
    scanf("%d %d", &a, &b);
    
    switch(op) {
        case '+':
            printf("%d + %d = %d", a, b, a + b);break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);break;
        case '/':
            printf("%d = %d * %d + %d", a, b , (a / b) , a % b);break;

    }
}