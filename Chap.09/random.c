#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(2023);
    for(int i = 0; i < 10; i ++){
        printf("%d ",  rand() % 10);
    }

    time_t before = time(NULL);
    int s = 0;
    for(int i = 0; i <10000000; i++){
        s += i;
    time_t after = time(NULL);
    printf("]n%ld", after - before);
    }
}