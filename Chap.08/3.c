#include <stdio.h>

int main()
{
    int m, n;
    int A[101][101] = {0};
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j == m - 1)
                printf("%d\n", A[j][i]);
            else
                printf("%d ", A[j][i]);
        }
    }
}