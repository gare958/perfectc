#include <stdio.h>

int main()
{
    printf("%Cava", 'J');

    char sq = '\'';
    printf("%c\7\n", '\a');
    printf("%c자바 언어'\n", sq);

    printf("\"Programming is learned by writing programs.\"라고 Kernighan이 말했다.");
}