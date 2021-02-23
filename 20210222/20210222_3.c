/*Задача 3.Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана*/
#include <stdio.h>
#include <string.h>

struct name
{
  int quantity;
  char product[128];
  float price;
};


int main(){
  struct name n;
  n.quantity=50;
  strcpy(n.product, "chocolate");
  n.price=2.50;
  printf("%d %s %f",n.quantity,n.product,n.price);
  
  return 0;
}