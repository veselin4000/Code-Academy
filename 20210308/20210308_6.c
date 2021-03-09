#include <stdio.h>

int main(){
  FILE *file;char item, status;
  int i=0;
  file = fopen("file.txt", "rt");
  if(file== NULL){
    perror ("Error opening file");
    return(-1);
  }
  while(fscanf(file, "%c", &item) != EOF){
    printf("%c",item);
  }
  fclose(file);
}