#include <stdio.h>

double atof(char *s){
  int i;double x, n;
  n = 0;x=1;
  for(i = 0; s[i] >= '0' && s[i] <= '9'; i++){
    n = 10 * n + (s[i] - '0');
  }
    if (s[i]=='.'){
      i++;
      for(i; s[i] >= '0' && s[i] <= '9'; i++){
        x*=10;
        n = 10 * n + (s[i] - '0');
        }
    }
  return n/x;
}

int main(){
  char x[]= "123.456";
  printf("%lf",atof(x));
}