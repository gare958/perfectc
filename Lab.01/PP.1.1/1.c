#include <stdio.h>

int main()
{
    int ms[200][200] = {0};
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = n / 2;
    int k = 1;
    while(k <= n*n){
        ms[a][b] = k;
        a = a - 1;
        b = b + 1;
        if(a < 0){
            a = n - 1;
        }
        if(b == n){
            b = 0;
        }
        if(ms[a][b] !=0 ){
            a = a + 2;
            b = b - 1;
            if(a >= n){
                if(a == n){
                    a = 0;
                }
                if(a == n + 1){
                    a = 1;
                }
            }
            if(b < 0){
                b = n - 1;
            }
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", ms[i][j]);
        }
        printf("\n");
    }
}