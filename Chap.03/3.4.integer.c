#include <stdio.h>

int main()
{
    short sVar = 32000;
    int iVar = -2140000000;

    long long dist1 = 2720000000000; // 27억 2천
    __int64 dist2   = 4500000000000; // 45억

    printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
    printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

    return 0;
}
