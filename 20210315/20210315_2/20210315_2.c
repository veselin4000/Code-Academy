#include <Stdio.h>
#include "c.h"

int main(){
  int n = 1;
  while (n){
    printf("Enter a digit:\n");
    scanf("%d", &n);
    write(n);
  }
    

}