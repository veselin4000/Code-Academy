/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static char ch1;

void checkRow(st *a,st *b,st *c,FILE*file){
  ch1 = getc(file);
  while (ch1!='\n'){
    if (ch1==EOF){
      break;
    }
    
    if (ch1=='{'){
      push(a,ch1);
    }else if (ch1=='}'){
      pop(a);
    }
    if (ch1=='['){
      push(b,ch1);
    }else if (ch1==']'){
      pop(b);
    }
    if (ch1=='('){
      push(c,ch1);
    }else if (ch1==')'){
      pop(c);
    }
    ch1 = getc(file);
   }
}

int main(){

  FILE *file = fopen("new.txt", "r");
  st *a = malloc(100*sizeof(char));
  st *b = malloc(100*sizeof(char));
  st *c = malloc(100*sizeof(char));
  createEmptyStack(a);
  createEmptyStack(b);
  createEmptyStack(c);
   
  while (ch1!=EOF){
    checkRow(a,b,c,file);
    if (isempty(a)&&isempty(b)&&isempty(c)){
      printf("Valid Paranthesis Expression\n");
    }else{
      printf("Invalid Paranthesis Expression\n");
    }
    if (a->top!=-1||b->top!=-1||c->top!=-1){
      a->top=-1;
      b->top=-1;
      c->top=-1;
    }
  }
  return 0;
}