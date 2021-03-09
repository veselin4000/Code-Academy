#include <stdio.h>

int main(){
  FILE *file=NULL;
  file=fopen("test.txt", "wt+");
  if(file!= NULL){
    fputs("asd.",file);
  }
  fputs("asd",file);

  fclose(file);
  return 0;
}