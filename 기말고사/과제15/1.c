#include <stdio.h>

void reverse(char *str){
    int n = 0;
    while(*(str + n) != '\0')
        n++;
    for(int i = 0; i < n; i++){
        char temp = *(str + i);
        *(str + i) = *(str + n - 1);
        *(str + n - 1) = temp;
        n--;
    }
}

int main()
{
    char str[100];
    gets(str);
    reverse(str);
    puts(str);
}