#include <stdio.h>
#include <string.h>

typedef struct _student student_t;

struct _student {
    int no;
    char name[10];
};

int main() {
    student_t s1 = {1, "joonion"};
    student_t s2 = {2, "gildong"};
    student_t *p1 = &s1;
    student_t *p2 = &s2;
    //p1 = p2;
    p1->no = p2->no;
    printf("%d\n", p1->no == p2->no);
    printf("%d\n", strcmp(p1->name, p2->name));
    printf("%d\n", p1 == p2);
    printf("%d\n", &p1 == &p2);
}