#include <stdio.h>

int main()
{
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    int A[100][100] = {0};
    int B[100][100] = {0};
    int C[100][100] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int a = 0; a < n; a++){
        for(int b = 0; b < k; b++){
            for(int c = 0; c < m; c++){
                C[a][c] += A[a][b] * B[b][c];
            }
        }
    }
    for( int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j == m - 1)
                printf("%d\n", C[i][j]);
            else
                printf("%d ", C[i][j]);
        }   
    }             
}