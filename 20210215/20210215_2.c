#include <stdio.h>

int main(int argc, char **argv){
  while(*(++argv)){
    printf("%s ", *(argv));
  }
  printf("\n");
  return 0;
}