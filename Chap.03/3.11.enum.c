#include <stdio.h>

int main()
{
    enum DAY { SUN, MON, TUE, WED, THU, FRI, SAT };
    printf("%d %d\n", SUN, SAT);

    enum SHAPE { POINT, LINE, TRI = 3, RECT, OCTA = 8, CIRCLE };
    printf("LINE: %d, RECT: %d, CIRCLE: %d\n", LINE, RECT, CIRCLE);

    typedef enum { C = 1972, CPP = 1983, JAVA = 1995, CSHARP = 2000 } PL;
    PL c = C, cpp = CPP, java = JAVA, python = JAVA - 4;
    printf("c: %d, cpp: %d, java: %d, python: %d\n", c, cpp, java, python);
}