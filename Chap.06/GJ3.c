#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n % 15 == 0)
        printf("combo");
    else if (n % 5 == 0)
        printf("chicken");
    else if (n % 3 == 0)
        printf("pizza");
    else
        printf("diet");
}