#include <stdio.h>

extern int arr[12];

int date(int year, int month, int day){
    int dayCount = 0;
    int i;
    for(i = 0; i < month - 1; i++){
        dayCount += arr[i];
    }
    dayCount += day;
    return dayCount;
}
void dateInput(){
    int year, month, day;
    int x = 0;
    printf("Enter an year:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        x = 1;
        arr[1]=29;
    }
    do{
        printf("Enter a month:\n");
        scanf("%d", &month);
    }while (month < 1 || month > 12);

    do{
        printf("Enter a day:\n");            
        scanf("%d", &day);
    }while (day < 0 || day > 28+x);

    printf("Day: %d\n", date(year, month, day));
}

int main(){
    dateInput();
    return 0;
}

int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};