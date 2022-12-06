#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;

struct _node {
    char *name;
    int price;
    node_t *next;
};

node_t *create_node(char *name, int price){
    node_t *a = (node_t*)malloc(sizeof(node_t));
    a->name = (char *)malloc(sizeof(char) * strlen(name) + 1);
    strcpy(a->name, name);
    a->price = price;
    a->next = NULL;
    return a;
}
void append_node(node_t **head, node_t *node){
    if(*head == NULL){
        *head = node;
    }
    else{
        node_t *trail = *head;
        while(trail->next != NULL){
            trail = trail->next;
        }
        trail->next = node;
    }
}
node_t *find_second(node_t *head){
    node_t *sec;
    node_t *trail = head;
    int max = 0;
    int pr = 0;
    while(trail != NULL){
        if(trail->price > max){
            max = trail->price;
        }
        trail = trail->next;
    }
    trail = head;
    while(trail != NULL){
    if(trail->price != max){
        if(trail->price > pr){
            pr = trail->price;
            sec = trail;
        }
    }
    trail = trail->next;
    }
    return sec;
}

int main()
{
    int n; scanf("%d\n", &n);
    char str[20]; int price;
    node_t *head = NULL;
    for (int i = 0; i < n; i++) {
        scanf("%s %d\n", str, &price);
        node_t *ptr = create_node(str, price);
        append_node(&head, ptr);
    }
    node_t *second = find_second(head);
    printf("%s %d", second->name, second->price);
}