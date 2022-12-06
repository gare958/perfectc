#include <stdio.h>

void fun1(int arr[][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

void fun2(int *ptr) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", *(ptr + i*3 + j));
        printf("\n");
    }
}

void fun3(int *ptr) {
    for (int j = 0; j < 3; j++)
        printf("%d ", *(ptr + j));
    printf("\n");
}

void fun4(int *ptr[]) {
    for (int i = 0; i < 2; i++) {
        int *p = ptr[i];
        for (int j = 0; j < 3; j++)
            printf("%d ", *(p + j));
        printf("\n");
    }
}

int main() {
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };
    int *p = &a[0][0];
    printf("%p %p\n", a, p);
    
    fun1(a);
    fun2(p);
    fun3(a[1]);

    int *pa[2];
    for (int i = 0; i < 2; i++)
        pa[i] = a[i];
    fun4(pa);
}   