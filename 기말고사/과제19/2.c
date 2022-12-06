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

void remove_node(node_t **head, node_t *node){
    node_t *trail = *head;
    if(trail == node){
        *head = trail->next;
    }
    else{
    while(trail->next != node){
        trail = trail->next;
    }
    trail->next = node->next;
    }
}

node_t *find_largest(node_t *head){
    node_t *trail = head;
    node_t *largest;
    int max = 0;
    while(trail != NULL){
        if(trail->price > max){
            max = trail->price;
            largest = trail;
        }
        trail = trail->next;
    }
    return largest;
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
    for (int i = 0; i < n; i++) {
        node_t *largest = find_largest(head);
        printf("%s %d\n", largest->name, largest->price);
        remove_node(&head, largest);
        free(largest);
    }
}