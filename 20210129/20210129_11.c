#include<stdio.h>

void rcomment(int c);
void inComment();

int main(){
  int c,d;
  printf("Enter a string to remove comments \n");
  while((c=getchar())!=EOF){
    rcomment(c);
  }
  return 0;
}

void rcomment(int c){
  int d;

  if( c == '/'){
    if((d=getchar())=='*'){
      inComment();
    }else{
      putchar(c);
      putchar(d);
    }
  }else{
    putchar(c);
  }
}

void inComment(){
  int c,d;
     
  c = getchar();
  d = getchar();

  while(c!='*' || d !='/'){
    c = d;
    d = getchar();
  }
}