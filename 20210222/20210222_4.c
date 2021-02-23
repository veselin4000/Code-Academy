/*Задача 4.Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/
#include <stdio.h>
struct date{
  int day;
  int month;
  int year;
};

int main(){
 struct date contractdate={21,2,2021};
 contractdate.day=11;
 contractdate.month=3;
 contractdate.year=1999;
 struct date contractdate2={.day=21,.month=5,.year=2021};
 return 0;
}