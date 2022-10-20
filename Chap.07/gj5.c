#include <stdio.h>

int main()
{
    int i, j, k, n;
    int cnt = 0;
    
    scanf("%d", &n);
    
    for(i = 1; i < n; i++){
        for(j = i; j < n; j++){
            k = n - i -j;
            if (k >= j)
                cnt += 1;
        }
    }
    printf("%d", cnt);
}