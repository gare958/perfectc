#include <stdio.h>
#include <string.h>

int cnt, a;
char home[100][20];
int c[100];

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
    for (int i = 0; i < n; i++){
        if(strcmp(*(str + i), *(str + i + 1)) == 0){
            cnt++;
        }
        if(strcmp(*(str + i), *(str + i + 1)) != 0){
            c[a] = cnt + 1;
            strcpy(home[a], *(str + i));
            a++;
            cnt = 0;
        }
    }
    int tem = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if(c[j] < c[j + 1]){
                tem = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tem;
                strcpy(temp, home[j]);
                strcpy(home[j], home[j + 1]);
                strcpy(home[j + 1], temp);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);
    char str[100][20];
    for (int i = 0; i < n; i++)
        gets(str[i]);
    bubblesort(n, str);
    for (int i = 0; i < a; i++)
        printf("%d %s\n", c[i], home[i]);
}