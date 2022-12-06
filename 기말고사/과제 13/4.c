#include <stdio.h>

int *find_largest(int n, int *ptr){
    int m = 0;
    int *a;
    for(int i = 0; i < n; i++){
        if(*(ptr + i) > m){
            m = *(ptr + i);
            a = ptr + i;
        }
    }
    return a;
}

int main()
{
    int n, arr[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int *p = find_largest(n, arr);
    printf("%d", *p);
}