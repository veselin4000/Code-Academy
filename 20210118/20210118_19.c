#include <stdio.h>

int main(){
  int A = 1;
  int B = 0;
  int C = 0;
  C = !(A&&B);
  printf("!(A&&B) = %d\n", C);
  C = !A||!B;
  printf("!A||!B = %d\n", C);

  C = !A||!B;
  printf("!A||!B = %d\n", C);
  C = !A&&!B;
  printf("!A&&!B = %d\n", C);
}