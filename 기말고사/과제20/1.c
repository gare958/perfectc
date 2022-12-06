#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int price;
};

/*
 qsort() function is declared in stdlib.h:
 void qsort(void *base, // pointer to the first element of the array.
            size_t nitems, // number of elements.
            size_t size,   // size of each element in bytes.
            int (*compare)(const void *, const void*)) // function pointer to compare two elements.
*/

int compare(const void *x, const void *y){
    fruit_t *a = (fruit_t*)x;
    fruit_t *b = (fruit_t*)y;
    if(a->price == b->price){
        return strcmp(a->name, b->name);
    }
    return b->price - a->price;
}
fruit_t *read_fruits(FILE *fp, int n){
    fruit_t *f = (fruit_t*)malloc(n * sizeof(fruit_t));
    for(int i = 0; i < n; i ++){
        fscanf(fp, "%s %d", &(f + i)->name, &(f + i)->price);
    }
    return f;
}
void write_fruits(FILE *fp, int n, fruit_t *fruits){
    for(int i = 0; i < n; i++){
        fprintf(fp, "%s %d\n", (fruits + i)->name, (fruits + i)->price);
    }
}

int main()
{
    int n; fscanf(stdin, "%d\n", &n);
    fruit_t *fruits = read_fruits(stdin, n);
    qsort(fruits, n, sizeof(fruit_t), compare);
    write_fruits(stdout, n, fruits);
}