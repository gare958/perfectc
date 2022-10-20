#include <stdio.h>

int year, month, day;
int M[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    scanf("%d %d %d", &year, &month, &day);
    for(int i = 0; i < 1000; i++){
        if(year % 4 == 0 && year != 2100){
            M[1] = 29;
        }
        else{
            M[1] = 28;
        }
        day++;
        if(day > M[month - 1]){
            day = 1;
            month ++;
        }
        if(month == 13){
            year++;
            month = 1;
        }       
    }
    printf("%d %d %d", year, month, day);
}