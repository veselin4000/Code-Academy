/*Задача 16.
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs*/
#include <stdio.h>
#include <string.h>

struct st{
  int n;
  char c[10];
  double d;
  enum {true,false}e;
};

int main(int argc, char *argv[]){
  FILE* file = fopen("file.csv","r");
  struct st s[20];
  for(int i=0;i<20;i++){
    int x = fscanf(file, "%d,%s,%lf,%d", s[i].n, s[i].c,s[i].d,s[i].e);
    if (x != 4) break;
  }
  return 0;
}