#include <stdio.h>

int arr[100][100];
    int i = 0;
    int j = 0;
    int k = 1;

int spiral(int n){
    int a = 0, b = 0;
    while(k <= n * n){
        if(k == n*n){
            arr[i][j] = k;
            break;
        }
        
        b = j;
        for(a = i; a < n - i - 1; a++){
            arr[a][b] = k++;
        }       
        for(b = j; b < n - j - 1; b++){
            arr[a][b] = k++;
        }
        for(a = a; a > i; a--){
            arr[a][b] = k++;
        }
        for(b = b; b > j; b--){
            arr[a][b] = k++;
        }
        i++;
        j++;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n = 0;
    scanf("%d", &n);
    spiral(n);
}