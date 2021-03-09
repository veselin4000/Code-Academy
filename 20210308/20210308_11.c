#include <stdio.h>

int main(){
  FILE *file=NULL;
  fpos_t a;

  file=fopen("test.txt", "wt+");
  fputs("asd", file);
  fputs("asd", file);
  
  fgetpos (file, &a);
  printf("%d", a);
  fclose(file);
  file=NULL;
  return 0;
}