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
void bubblesort(int n, node_t *head){
    node_t *pi = head;
    node_t *pj = head;
    for(int i = 0; i < n; i++){
        pj = head;
        for(int j = 0; j < n - 1; j++){
            if(pi -> price > pj -> price){
                int price = pi->price;
                char *str = pi->name;
                pi->price = pj->price;
                pi->name = pj->name;
                pj->price = price;
                pj->name = str;
            }
            pj = pj->next;
        }
        pi = pi->next;
    }
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
    bubblesort(n, head);
    node_t *trail = head;
    while (trail != NULL) {
        printf("%s %d\n", trail->name, trail->price);
        trail = trail->next;
    }
} 