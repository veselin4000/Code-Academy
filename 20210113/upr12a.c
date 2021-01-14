#include <stdio.h>

int main(){

  for (int i = 0; i < 6; i++){
      for (int j =i*2 ; j > 0; j--){
        printf(" ");
      }
      for (int j =11 - i*2 ; j > 0; j--){
        printf("# ");
      }
      printf("\n");
  }
  
}