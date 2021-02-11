#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void passGen(){
  char a;
  char b;
  int n ;
  srand(time(NULL));

  for (int i = 0; i < 6; i++){
    n = rand() % 2;
    if (n == 1){
      a = rand() % (122-97) + 1 + 97; 
      printf("%c",a);
    }else{
      b = rand() % (90-65) + 1 + 65; 
      printf("%c",b);
    }
  }
}

int main(){
  int x = 0;
  do{
    printf("Generated password : ");
    passGen();
    printf("\nPress 0 for new password. 1 to exit.\n");
    scanf("%d", &x);
  }while (!x);
  return 0;
}