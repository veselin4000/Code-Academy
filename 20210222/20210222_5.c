/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор*/
#include <stdio.h>

struct date{
  int day;
  int month;
  int year;
};

int main(){
  struct date a[10];
  for (int i = 0; i < 10 ; i++){
    a[i].day=i*2;
   // printf("Enter day:");
    //scanf("%d",&a[i].day);
    a[i].month=i+2;
    //printf("Enter month");
    //scanf("%d",&a[i].month);
    a[i].year=2010+i;
    //printf("Enter year");
   // scanf("%d",&a[i].year);
  }
  for (int i = 0; i < 10; i++){
    printf("Day: %d Month: %d Year:%d\n",a[i].day,a[i].month,a[i].year);
  }
  return 0;
}