#include <stdio.h>

int main()
{
    int hex;
    printf("16진수 정수(1A 등)을 입력하세요 >> ");
    scanf("%x", &hex);
    printf("%o %d %X\n\n", hex, hex, hex);

    printf("정수(0 또는 0x 리딩 표시방식으로)를 입력하세요 >> ");
    scanf("%i", &hex);
    printf("%#o %d %#x\n\n", hex, hex, hex);
}