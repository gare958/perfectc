#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j)
                printf("%d", k);
            else 
                printf("%d ", k);
            k += 2;
        }
        puts("");
    }
}