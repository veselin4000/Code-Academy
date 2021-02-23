#include <stdio.h>
#include <string.h>

union un{
    int n;
    char c[32];
};

enum e{
    VAR_INT,
    VAR_STR
};

void print(union un *u,enum e *p){
  if (*p==VAR_STR){
   printf("%s",u->c);
   u->n=atoi(u->c);
   *p=VAR_INT;
  }else if(*p==VAR_INT){
    printf("%d",u->n);
    itoa(u->n,u->c,10);
    *p=VAR_STR;
  }else{ 
    printf("Err");
  }
}

int main(){
  union un u;
  strcpy(u.c,"Hello world");
  enum e s=VAR_STR;
  print(&u,&s);
  print(&u,&s);
  return 0;
}

