#include <stdio.h>

int main()
{
    char abc, plus;

    printf("C 프로그래밍 언어의 원하는 학점(A+, C-)를 입력 >> ");
    abc = getchar();
    scanf("%c", &plus);

    printf("학점 %c%c\n", abc, plus);
}