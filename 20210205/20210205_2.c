/*Задача 2.Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/
#include <stdio.h>

size_t my_strlen(char *s){
  size_t n=0;
  while (s[n]!='\0'){
    n++;
  }
  return n;
}

int main(){
  char s[]="Hello";
  printf("%d", my_strlen(s));
  return 0;
}