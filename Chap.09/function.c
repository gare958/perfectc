#include <stdio.h>

int add(int a, int b){
    printf("%d %d", a, b);
    int a = 20, b = 40;
    printf("%d %d", a, b);
    return a + b;
}

int main() {

    int a = 10, b = 20;
    int c = add(a, b);
    printf("%d %d", a, b);
    printf("%d\n", c);
    return 0;
}/* 스택자료형으로 저장되고 입력한 값을 복사해가서 함수에 넣어 계산 실행, 이후 pop되고 원래 값으로 실행되므로 마지막 프린트에서는 10과 20을 더한 값 출력(main영역에 a = 10, b = 20 저장 
add영역에 이를 복사한 값이 저장됨)*/