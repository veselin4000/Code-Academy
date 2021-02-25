/*2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.
*/
#include <stdio.h>
#define swap(t,x,y) {t i = x ; x = y ; y = i;}

int main(){
  int a=5;
  int b=10;
  printf("a=%d,b=%d\n", a, b);
  swap(char, a,b);
  printf("a=%d,b=%d\n", a, b);
  return 0;
  }
