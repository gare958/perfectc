#include <stdio.h>

int hor;
int ver;
int dig1;
int dig2;

int main()
{
    int n, sum = 0;
    int v=1;
    int A[10001] = {0};
    int ms[100][100] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &ms[i][j]);
            A[ms[i][j]] = 1;
        }
    }
    for(int i = 0; i < n; i++){
        sum += ms[0][i];
    }
    for(int i = 1; i <= n*n; i++){
        if(A[i]==0){
            v = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            hor += ms[i][j];
            ver += ms[j][i];
        }
        if(hor != sum){
            v = 0;
        }
        if(ver != sum){
            v = 0;
        }
        hor = 0;
        ver = 0;
    }
    for(int i = 0; i < n; i++){
        dig1 += ms[i][i];
        dig2 += ms[i][n - 1 - i];
    }
    if(dig1 != sum){
            v = 0;
        }
    if(dig2 != sum){
            v = 0;
        }
    
    if(v == 1){
        printf("%d", sum);
    }
    if(v == 0){
        printf("%d", v);
    }
}