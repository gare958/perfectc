#include <stdio.h>

int main()
{
    int i, j, k, n, cnt = 0;
     
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){
        for(j = i; j < n; j++)
            if (i + j + k == n && j <= k)
                cnt += 1;
    }
    printf("%d", cnt);    
}   