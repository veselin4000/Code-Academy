#include <stdio.h>
#include <string.h>
struct stru{
  union un{
      int n;
      char c[32];
  }un;

  enum e{
      VAR_INT,
      VAR_STR
  }en;
};

void print(struct stru*s){
  if ((s->en)==VAR_STR){
   printf("%s",s->un.c);
   s->un.n=atoi(s->un.c);
   s->en=VAR_INT;
  }else if((s->en)==VAR_INT){
    printf("%d",s->un.n);
    itoa(s->un.n,s->un.c,10);
    s->en=VAR_STR;
  }else{ 
    printf("Err");
  }
}

int main(){
  struct stru s;
  strcpy(s.un.c,"Hello world");
  enum e s=VAR_STR;
  print(&s);
  print(&s);
  return 0;
}

