#include <stdio.h>

int main(){
    int arr[100][100] = {0};
    int brr[100][100] = {0};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            brr[j][n - 1 - i] = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }   
}