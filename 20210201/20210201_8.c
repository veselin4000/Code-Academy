/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>

void reverse(char a[]){
  char temp =0;
  int i = 0;
  int j = 0;
  for(i = 0, j = strlen(a)-1; i  <j ; i++, j--){
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
  }
  printf("%s", a);
}

int main(){
  char s[32];
  scanf("%s", s);
  reverse(s);
  return 0;
}