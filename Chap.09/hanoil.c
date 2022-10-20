#include <stdio.h>

void hanoi(int n, char from, char to, char by) {
    if (n == 1) {
        // exit condition
        printf("%c - > %c\n", from, to);
    }
    else {
        //recursive condition
        hanoi(n - 1, from, by, to);
        hanoi(1, from, to, by);
        hanoi(n - 1, by, to, from);
    }
}

int main()

{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
}