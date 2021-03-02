#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  printf("%f",((double)rand() / RAND_MAX) * (3.5 - 0.5) + 0.5);
}