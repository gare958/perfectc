#include <stdio.h>
#include <string.h>

void bubblesort(int n, char *ptr[]){
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++){
            if(strlen(*(ptr + j)) > strlen(*(ptr + j + 1))){
                strcpy(temp, *(ptr + j));
                strcpy(*(ptr + j), *(ptr + j + 1));
                strcpy(*(ptr + j+ 1), temp);
            }
            if(strlen(*(ptr + j)) == strlen(*(ptr + j + 1))){
                if(strcmp(*(ptr + j), *(ptr + j + 1)) > 0){
                    strcpy(temp, *(ptr + j));
                    strcpy(*(ptr + j), *(ptr + j + 1));
                    strcpy(*(ptr + j+ 1), temp);
                }
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
    char *ptr[10];
    for (int i = 0; i < n; i++)
        ptr[i] = str[i];
    bubblesort(n, ptr);
    for (int i = 0; i < n; i++)
        puts(ptr[i]);
}