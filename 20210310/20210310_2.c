#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

typedef struct stack {
  int items[MAX];
  int top;
}st;

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

int main(){
   FILE *file = fopen("new.txt", "r");
   st *a = malloc(100*sizeof(char));
   st *b = malloc(100*sizeof(char));
   st *c = malloc(100*sizeof(char));
   createEmptyStack(a);
   createEmptyStack(b);
   createEmptyStack(c);
   char ch1 = getc(file);
   while (ch1!=EOF){
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

   if (isempty(a)&&isempty(b)&&isempty(c)){
      printf("Valid Paranthesis Expression\n");
   }else{
     printf("Invalid Paranthesis Expression\n");
   }
   return 0;
}