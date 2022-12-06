#include <stdio.h>
#include <string.h>

void bubblesort(int n, char (*str)[20]){
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++){
            if(strcmp(*(str + j), *(str + j + 1)) > 0){
                strcpy(temp, *(str + j));
                strcpy(*(str + j), *(str + j + 1));
                strcpy(*(str + j+ 1), temp);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);
    char str[10][20];
    for (int i = 0; i < n; i++)
        gets(str[i]);
    bubblesort(n, str);
    for (int i = 0; i < n; i++)
        puts(str[i]);
}