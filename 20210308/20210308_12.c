#include <stdio.h>

int main(){
  FILE *file;
  char item, status,pos;
  file = fopen("file.txt", "w+");
  if(file== NULL){
    perror ("Error opening file");
    return(-1);
  }
 
  fputs("Hello world!", file);
  pos=ftell(file);
  fseek( file, pos, SEEK_SET );
  fputs("NEW", file);
}