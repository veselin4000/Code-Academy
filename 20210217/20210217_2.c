/*Задача 2. Добавете към горния код функции за умножение
и деление.*/
#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB){
  return nA+nB;
}

int fnMinus(int nA, int nB){
  return nA-nB;
}

int fnMultiply(int nA, int nB){
  return nA*nB;
}

int fnDiv(int nA, int nB){
  return nA/nB;
}

int main(int argc, char* argv[]){
  int (* pfCalc) (int, int) = NULL;
  if (argc < 4){
    printf("\nUsage: %s +/- arg1 arg2\n", argv[0]);
  }else if ('-' == argv[2][0]){
    pfCalc = fnMinus; 
  }else if ('+' == argv[2][0]){ 
    pfCalc = fnPlus;
  }else if ('.' == argv[2][0]){ 
    pfCalc = fnMultiply;
  }else if ('/' == argv[2][0]){ 
    if (argv[3][0]!='0'){
       pfCalc = fnDiv;
    }else{printf("Cannot divide by 0.");} 
  }
  (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));
  return 0;
}

