#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    printf("두 정수를 입력 >> ");
    scanf("%d %d", &x, &y);

    printf("%d\n", x += y);
    printf("%d %d\n", x, y);
    printf("%d\n", x -= y);
    printf("%d %d\n", x, y);
}