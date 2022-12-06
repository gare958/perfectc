#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int offset;
};

void traverse_fruits(FILE *fp){
    int offset;
    fread(&offset, sizeof(int), 1, fp);
    fruit_t f;
    while(offset != 0){
        if(offset == -1){
            break;
        }
        fseek(fp, offset * sizeof(fruit_t), SEEK_CUR);
        fread(&f, sizeof(fruit_t), 1, fp);
        printf("%s\n", f.name);
        offset = f.offset;
    }
}

int main()
{
    traverse_fruits(stdin);
}