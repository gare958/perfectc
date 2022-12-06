#include <stdio.h>
#define SIZE 10

int mx;
int *mmmax(int n, int m, int p, int *ptr, int *a, int *b, int *c){
    int max = *ptr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < p; k++){
                if(*(ptr + 100 * i + 10 * j + k) >= max){
                max = *(ptr + 100 * i + 10 * j + k);
                mx = *(ptr + 100 * i + 10 * j + k);
                *a = i;
                *b = j;
                *c = k;
            }
        }
    }
}
return &mx;
}

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    int A[SIZE][SIZE][SIZE];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < p; k++)
                scanf("%d", &A[i][j][k]);
    int i, j, k;
    int *maxptr = mmmax(n, m, p, &A[0][0][0], &i, &j, &k);
    printf("%d %d %d %d %d", *maxptr, A[i][j][k], i, j, k);
}