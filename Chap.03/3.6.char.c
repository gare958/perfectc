#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 65;       // 대문자 A: 10진수 코드 값 65
    char c3 = '\127';   // 대문자 W:  8진수 코드 값 0127
    char c4 = '\x57';   // 대문자 W: 16진수 코드 값 0x57

    printf("문자 값(문자): %c %c %c %c\n", c1, c2, c3, c4);
    printf("코드 값(문자): %d %d %d %d\n", c1, c2, c3, c4);

    return 0;
}
