#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int A[100][100] = {0};
    int B[100][100] = {0};
    int C[100][100] = {0};
    int D[100][100] = {0};
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < m; j++)
            for(int k = 0; k < n; k++){
                if(i == 0)
                    scanf("%d", &A[j][k]);
                else if(i == 1)
                    scanf("%d", &B[j][k]);
                else
                    scanf("%d", &C[j][k]);
            }  
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            D[i][j] = A[i][j] + B[i][j] - C[i][j];
            if (j == n - 1)
                printf("%d\n", D[i][j]);
            else
                printf("%d ", D[i][j]);
        }
}