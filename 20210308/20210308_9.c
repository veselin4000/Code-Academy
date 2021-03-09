#include <stdio.h>

int main(){
  FILE *file;
  int n;
  file = fopen("file.txt", "w+");
  if(file== NULL){
    perror ("Error opening file");
    return(-1);
  }
  
  n=fprintf(file,"%s %s %d","weeee","world",5);
  if(n!=0){
    return n;
  }else return -1;

  fclose(file);
}