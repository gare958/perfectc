#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long a[100][100] = {0};
    long long t[100][100] = {0};
    long long tt[100][100] = {0};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%lld", &a[i][j]);
            t[i][j] = a[i][j];
        }
    }
    for(int i = 0; i < n - 1; i++){
        tt[0][0] = a[0][0] * t[0][0] + a[0][1] * t[1][0];
    tt[0][1] = a[0][0] * t[0][1] + a[0][1] * t[1][1];
    tt[1][0] = a[1][0] * t[0][0] + a[1][1] * t[1][0];
    tt[1][1] = a[1][0] * t[0][1] + a[1][1] * t[1][1];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            t[i][j] = tt[i][j];
        }
    }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%lld ", t[i][j]);
        }
        printf("\n");
    }
}