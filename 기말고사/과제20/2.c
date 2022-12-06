#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int price;
};

int compare(const void *x, const void *y){
    fruit_t *a = (fruit_t*)x;
    fruit_t *b = (fruit_t*)y;
    if(a->price == b->price){
        return strcmp(a->name, b->name);
    }
    return b->price - a->price;
}
void read_fruits(FILE *fp, int *n, fruit_t **fruits){
    fread(n, sizeof(int), 1, fp);
    fruit_t *f = (fruit_t*)malloc(*n * sizeof(fruit_t));
    fread(f, sizeof(fruit_t), *n, fp);
    *fruits = f;
}
void write_fruits(FILE *fp, int n, fruit_t *fruits){
    for(int i = 0; i < n; i++){
        fprintf(fp, "%s %d\n", (fruits + i)->name, (fruits + i)->price);
    }
}

int main()
{
    int n; fruit_t *fruits;
    read_fruits(stdin, &n, &fruits);
    qsort(fruits, n, sizeof(fruit_t), compare);
    write_fruits(stdout, n, fruits);
}