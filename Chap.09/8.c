#include <stdio.h>
#include <ctype.h>

int ymj;
int dmj;
int sj;

int main()
{
    int n = 0;
    char chr;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%c", &chr);
        if(isalpha(chr)){
            ymj++;
        }
        if(isupper(chr)){
            dmj++;
        }
        if(isdigit(chr)){
            sj++;
        }
    }
    printf("%d\n", ymj);
    printf("%d\n", dmj);
    printf("%d", sj);
}