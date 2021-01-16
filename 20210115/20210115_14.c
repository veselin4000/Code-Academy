#include <stdio.h>

extern int g_a;

void test(){
  g_a+=1;
}

int main(){
  for (int i = 0; i < 3; i++){
    test();
  }
  printf("Global variable = %d\n", g_a);
}
int g_a=0;