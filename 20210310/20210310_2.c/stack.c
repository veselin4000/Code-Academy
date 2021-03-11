/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int count = 0;



void createEmptyStack(st *s) {
  s->top = -1;
}

int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  count++;
}

void pop(st *s) {
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
  } else {
    s->top--;
  }
  count--;
}

