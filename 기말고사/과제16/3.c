#include <stdio.h>

typedef struct _fruit fruit_t;

struct _fruit {
    int price;
    char name[100];
};

fruit_t *find_both(int n, fruit_t *items, fruit_t **maxptr){
    int max = 0;
    int mx;
    for(int i = 0; i < n; i++){
        if((items + i)->price > max){
            max = (items + i)->price;
        }
    }
    for(int i = 0; i < n; i++){
        if((items + i)->price == max){
            *maxptr = (items + i);
            mx = (items + i)->price;
        }
    }
    max = 0;
    for(int i = 0; i < n; i++){
        if((items + i)->price > max & (items + i)->price != mx){
            max = (items + i)->price;
        }
    }
    for(int i = 0; i < n; i++){
        if((items + i)->price == max){
            return (items + i);
        }
    }
}

int main()
{
    fruit_t fruits[20];
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d", fruits[i].name, &fruits[i].price);

    fruit_t *maxptr, *sndptr;
    sndptr = find_both(n, fruits, &maxptr);
    printf("%s %d\n", maxptr->name, maxptr->price);
    printf("%s %d\n", sndptr->name, sndptr->price);
}

