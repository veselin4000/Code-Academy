/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.
*/
#include <stdio.h>
#ifndef _MYHEADER_H_
  #define _MYHEADER_H_ printf("Defined");
#endif

int main(){
  _MYHEADER_H_;
  return 0;
}