/*Задача 7.
Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include <Windows.h>
void sleep(int);

void ctrlc_handler(int iUnused){
  printf("\nCtrl + C\n");
  exit(EXIT_FAILURE);
}
void ctrlz_handler(int iUnused){
  printf("\nCtrl + Z\n");
  exit(EXIT_FAILURE);
}
void ctrld_handler(int iUnused){
  printf("\nCtrl + D\n");
  exit(EXIT_FAILURE);
}

int main(){
  signal(SIGINT, ctrlc_handler);
  signal(SIGTSTP, ctrlz_handler);
  signal(EOF, ctrld_handler);
  while (!0){
    sleep(1);
  }
  return 0;
}