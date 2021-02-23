/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
#include <stdio.h>

struct date{
  int day:6;
  int month:6;
  int year:12;
};

void printDate(struct date *p){
  printf("%d.%d.%d\n",p->day,p->month,p->year);
}

int isValid(struct date *p){
  if(p->year>=1900){
    if (p->month>=1 && p->month<=12){
      if((p->day>=1 && p->day <=31) && ((p->month>=1&&p->month<=7&&p->month%2!=0)||(p->month<=12&&p->month>=8&&p->month%2==0))){
        return 1;
      }else if((p->day>=1 && p->day<=30) && (p->month==4 || p->month==6 || p->month==9 || p->month==11)){
        return 1;
      }else if ( p->month==2 ){
        if (p->day<=29&&p->day>0&& (p->year%400==0 ||(p->year%4==0 && p->year%100!=0))){
          return 1;
        }else if (p->day<=28 && p->day>0){
          return 1;
        }
        return 0;
      }else return 0;
      }else return 0;
  }else return 0;
}

int main(){
  struct date a={28,2,2020};
  struct date *ptr=&a;
  if (isValid(ptr)){
    printDate(ptr) ; 
  }else{
    printf("Invalid date.");
  }
  return 0;
}