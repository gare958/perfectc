#include <stdio.h>
#define SIZE 100

void madd(int n, int m, int (*x)[SIZE], int (*y)[SIZE], int *z){
    for(int i = 0; i < n; i++){
        int *a = x[i];
        int *b = y[i];
        for(int j = 0; j < m; j++){
            *(z + SIZE * i + j) = *(a + j) + *(b + j);
        }
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &B[i][j]);
    madd(n, m, A, B, &C[0][0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}