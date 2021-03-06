/*Задача 6.
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  char *buffer;
  char c;
  char *p;
  int size = 2, i = 0;
  printf("Enter symbols\n");
  buffer = (char*)malloc(size*sizeof(char));
  while ((c = getchar()) != EOF){
    i++;
    if (size==i){
      size*=2;
      p = realloc(buffer,(size)*sizeof(char));
    }
    if(p != NULL){
      buffer = p;
      buffer[i - 1] = c;
    }
  }
  printf("Entered symbols : \n%s\n", buffer);
  free(buffer);
  return 0;
}