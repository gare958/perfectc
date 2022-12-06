#include <stdio.h>

typedef struct _coord coord_t;

struct _coord {
    int x;
    int y;
};

int farpoints(int n, coord_t *p, coord_t **r, coord_t **s){
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y) > max){
                max = (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y);
                *r = p + i;
                *s = p + j;
            }
        }
    }
    return max;
}

int main()
{
    int n;
    scanf("%d", &n);
    coord_t point[100];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &point[i].x, &point[i].y);
    coord_t *u, *v;
    int sqrdist = farpoints(n, point, &u, &v);
    printf("sqrt(%d)\n", sqrdist);
    printf("%d %d\n", u->x, u->y);
    printf("%d %d\n", v->x, v->y);
}