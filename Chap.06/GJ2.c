#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a < b){
        b = a^b;
        a = a^b;
        b = a^b;
    }
    if (b < c)
    {   c = b^c;
        b = b^c;
        c = b^c;
    }
    if (c < d)
    {   d = c^d;
        c = c^d;
        d = c^d;
    }
    if (d < e)
    {   e = d^e;
        d = d^e;
        e = d^e;
    }
    if (a < b){
        b = a^b;
        a = a^b;
        b = a^b;
    }
    if (b < c)
    {   c = b^c;
        b = b^c;
        c = b^c;
    }
    if (c < d)
    {   d = c^d;
        c = c^d;
        d = c^d;
    }
    if (a < b){
        b = a^b;
        a = a^b;
        b = a^b;
    }
    if (b < c)
    {   c = b^c;
        b = b^c;
        c = b^c;
    }
    printf("%d", c);
}