#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;

struct _node {
    char name[20];
    int price;
    node_t *next;
};

node_t *head = NULL;

node_t *create_node(char *name, int price){
    node_t *a = (node_t*)malloc(sizeof(node_t));
    a->price = price;
    strcpy(a->name, name);
    a->next = NULL;
    return a;
}
void append_node(node_t *node){
    node_t *trail = head;
    while(trail->next != NULL){
        trail = trail->next;
    }
    trail->next = node;
}
node_t *find_largest(){
    node_t *max;
    node_t *trail = head;
    int largest = 0;
    while(trail != NULL){
        if(trail->price > largest){
            largest = trail->price;
            max = trail;
        }
        trail = trail->next;
    }
    return max;
}

int main()
{
    int n; scanf("%d\n", &n);
    char str[20]; int price;
    for (int i = 0; i < n; i++) {
        scanf("%s %d\n", str, &price);
        node_t *ptr = create_node(str, price);
        if (head == NULL)
            head = ptr;
        else
            append_node(ptr);
    }
    node_t *largest = find_largest();
    printf("%s %d", largest->name, largest->price);
}