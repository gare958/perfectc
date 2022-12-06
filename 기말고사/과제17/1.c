//char x = 123.123
//float x = atof(s) 
//char x = 100
//int x = atoi(s)
#include <stdio.h>
#include <stdlib.h>

typedef struct _number number_t;

struct _number {
    int type;
    union _value {
        int int_value;
        float real_value;
        struct _complex {
            float real;
            float imag;
        } complex_value;
    } value;
};

void read_number(int t, char *s1, char *s2, number_t *n){
    if(t == 0){
        n->type = 0;
        n->value.int_value = atoi(s1);
    }
    if(t == 1){
        n->type = 1;
        n->value.real_value = atof(s1);
    }
    if(t == 2){
        n->type = 2;
        n->value.complex_value.real = atof(s1);
        n->value.complex_value.imag = atof(s2);
    }
}
void print_number(number_t n){
    if(n.type == 0){
        printf("%d\n", n.value.int_value);
    }
    if(n.type == 1){
        printf("%.3f\n", n.value.real_value);
    }
    if(n.type == 2){
        printf("%.3f + %.3fi\n", n.value.complex_value.real, n.value.complex_value.imag);
    }
}

int main()
{
    int n; scanf("%d\n", &n);
    number_t num[100];
    for (int i = 0; i < n; i++) {
        int t; char str1[100], str2[100];
        scanf("%d %s", &t, str1);
        if (t == 2) scanf("%s", str2);
        read_number(t, str1, str2, &num[i]);
    }
    for (int i = 0; i < n; i++) {
        print_number(num[i]);
    }
}