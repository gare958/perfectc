#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long long_t;
typedef struct _node *node_ptr;

struct _node {
    long_t num;
    node_ptr next;
};

node_ptr collatz(long_t n){
    node_ptr a = (node_ptr)malloc(sizeof(node_ptr));
    node_ptr temp = a;
    a -> num = n;
    a -> next = NULL;
    while(n != 1){
        node_ptr b = (node_ptr)malloc(sizeof(node_ptr));
        if(n % 2 == 0){
            b -> num = n / 2;
            n = n / 2;
        }
        else{
            b -> num = 3 * n + 1;
            n = 3 * n + 1;
        }
        b -> next = NULL;
        temp->next = b;        
        temp = temp->next;
    }
    return a;
}

void clean(node_ptr head){
    node_ptr t1 = head;
    node_ptr t2 = head->next;
    while(t2 != NULL){
    free(t1);
    t1 =  t2;
    t2 = t1 -> next;
    }
}

int main()
{
    int n; scanf("%d\n", &n);
    while (n--) {
        long_t m; scanf("%llu", &m);
        node_ptr head = collatz(m);
        for (node_ptr t = head; t != NULL; t = t->next)
            printf("%lld ", t->num);
        printf("\n");
        clean(head);
    }
    printf("finished");
}