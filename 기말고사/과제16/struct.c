#include <stdio.h>

typedef struct _student student_t;

struct _student {
    int no;
    char name; // 1바이트이지만 4바이트 단위로 끊김
    double gpa;
};

int main() {
    student_t joonion;
    student_t students[10];
    student_t *goonion = &students[0]; // goonion + 1은 &students[1]
    joonion.no = 123;
    joonion.name = 'a';
    joonion.gpa = 3.3;
    goonion -> no = 100;
    printf("%d\n", sizeof(joonion));
    printf("%d\n", sizeof(students));
    printf("%d %d %f", joonion.no, joonion.name, joonion.gpa);
}