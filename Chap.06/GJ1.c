#include <stdio.h>

int main()
{
    
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 1 || n%2 == -1)
        printf("odd");
    else if(n % 2 == 0)
        printf("even");
    else 
        printf("even");
}