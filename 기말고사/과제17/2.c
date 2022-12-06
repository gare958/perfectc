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

void (*read_number)(number_t *a, number_t *b);
void (*add_number)(number_t a, number_t b, number_t *c);
void print_number(number_t n){
    if(n.type == 0){
        printf("%d", n.value.int_value);
    }
    if(n.type == 1){
        printf("%.3f", n.value.real_value);
    }
    if(n.type == 2){
        printf("%.3f + %.3fi", n.value.complex_value.real, n.value.complex_value.imag);
    }
}
void read_int(number_t *a, number_t *b){
    scanf("%d", &a->value.int_value);
    scanf("%d", &b->value.int_value);
    a->type = 0;
    b->type = 0;
}
void read_real(number_t *a, number_t *b){
    scanf("%f", &a->value.real_value);
    scanf("%f", &b->value.real_value);
    a->type = 1;
    b->type = 1;
}
void read_complex(number_t *a, number_t *b){
    a->type = 2;
    b->type = 2;
    scanf("%f", &a->value.complex_value.real);
    scanf("%f", &a->value.complex_value.imag);
    scanf("%f", &b->value.complex_value.real);
    scanf("%f", &b->value.complex_value.imag);
}
void add_int(number_t a, number_t b, number_t *c){
    c->type = 0;
    c->value.int_value = a.value.int_value + b.value.int_value;
}
void add_real(number_t a, number_t b, number_t *c){
    c->type = 1;
    c->value.real_value = a.value.real_value + b.value.real_value;
}
void add_complex(number_t a, number_t b, number_t *c){
    c->type = 2;
    c->value.complex_value.real = a.value.complex_value.real + b.value.complex_value.real;
    c->value.complex_value.imag = a.value.complex_value.imag + b.value.complex_value.imag;
}

int main()
{
    int t; scanf("%d\n", &t);
    switch (t) {
        case 0: read_number = read_int; 
                add_number = add_int; break;
        case 1: read_number = read_real; 
                add_number = add_real; break;
        case 2: read_number = read_complex; 
                add_number = add_complex; break;
    }
    number_t a, b, c;
    read_number(&a, &b);
    add_number(a, b, &c);
    print_number(c);
}