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
void mult_int(number_t a, number_t b, number_t *c){
    c->type = 0;
    c->value.int_value = a.value.int_value * b.value.int_value;
}
void mult_real(number_t a, number_t b, number_t *c){
    c->type = 1;
    c->value.real_value = a.value.real_value * b.value.real_value;
}
void mult_complex(number_t a, number_t b, number_t *c){
    c->type = 2;
    c->value.complex_value.real = a.value.complex_value.real * b.value.complex_value.real - a.value.complex_value.imag * b.value.complex_value.imag;
    c->value.complex_value.imag = a.value.complex_value.real * b.value.complex_value.imag + a.value.complex_value.imag * b.value.complex_value.real;
}

int main()
{
    void (*arr_read[3]) = {read_int, read_real, read_complex};
    void (*arr_add[3]) = {add_int, add_real, add_complex};
    void (*arr_mult[3]) = {mult_int, mult_real, mult_complex};
    int t; scanf("%d\n", &t);
    void (*read_number)(number_t *a, number_t *b) = arr_read[t];
    void (*add)(number_t a, number_t b, number_t *c) = arr_add[t];
    void (*mult)(number_t a, number_t b, number_t *c) = arr_mult[t];
    number_t a, b, c;
    read_number(&a, &b);
    add(a, b, &c);
    print_number(c);
    mult(a, b, &c);
    print_number(c);
}