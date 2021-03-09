#include <stdio.h>
int main(){
  FILE *file;
  char str[60];
  file = fopen("file.txt", "rt");
  if(file== NULL){
    perror ("Error opening file");
    return(-1);
  }
  if(fgets(str,60,file)!= NULL){
    printf("%s",str);
  }
  fclose(file);
  file=NULL;
  return 0;
}