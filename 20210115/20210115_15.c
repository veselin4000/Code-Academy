#include <stdio.h>

static int a = 0;

void test(){
  a+=1;
}

int main(){
  for (int i = 0; i < 3; i++){
    test();
  }
  printf("%d", a);
}
