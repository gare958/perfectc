#include <stdio.h>
#define SIZE 100

int mx;

int *mmax(int n, int m, int *x, int *a, int *b){
    int max = *x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(*(x + SIZE * i + j) >= max){
                max = *(x + SIZE * i + j);
                mx = *(x + SIZE * i + j);
                *a = i;
                *b = j;
            }
        }
    }
    return &mx;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &A[i][j]);
    int i, j;
    int *maxptr = mmax(n, m, &A[0][0], &i, &j);
    printf("%d %d %d %d", *maxptr, A[i][j], i, j);
}