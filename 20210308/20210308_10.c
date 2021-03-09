#include <stdio.h>

int main(){
  FILE *file=NULL;
  file=fopen("test.txt", "wt+");
  if(file == NULL){
    printf("Failed to open the file");
    return -1;
  }
  fputs("asd",file);
  fputs("asd",file);
  long fpos = ftell(file);
  printf("%ld",fpos);
  fclose(file);
  file=NULL;
  return 0;
}