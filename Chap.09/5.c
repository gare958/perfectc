#include <stdio.h>

int cnt = 0;
int depth = 0;

int ack(int n, int m, int d){
    cnt++;
    if(d > depth){
        depth = d;
        }
    if(n == 0){
        return (m + 1);
    }
    else if(m == 0){
        return ack(n - 1, 1, d + 1);
    }
    else{
        return ack(n - 1, ack(n, m - 1, d + 1), d + 1);
    }
}

int main() {
    int a , b;
    scanf("%d %d", &a, &b);
    ack(a, b, 1);
    printf("%d\n%d\n%d", ack(a, b, 1), cnt, depth);
}