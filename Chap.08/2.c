#include <stdio.h>

int main()
{
    int A[1000] = {0};
    int m, n;
    int max = 0;
    scanf("%d\n", &n);
    char chr;
    for(int i = 0; i < n; i++){
        scanf("%c", &chr);
        m = chr - 65;
        A[m] += 1;
    }
    for(int i = 0; i < 27; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    for(int i = 0; i < 27; i++){
        if(A[i] == max){
            printf("%d\n", i + 65);
        }

    }
}