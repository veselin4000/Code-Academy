/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/
#include <stdio.h>

int recursSol(int i){
  if(i<2){
    return 1;
  }else{
    return i*recursSol(i-1);
  }
}

int main(){
  printf("%d", recursSol(30));
  return 0;
}