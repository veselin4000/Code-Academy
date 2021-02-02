#include <stdio.h>
#include <ctype.h>

double atof(char *s){
  int i,p;double x, n;
  n = 0;x=1;p=1;
  while (!isdigit(s[i])){
    if (s[i]=='-'){
      p=-p;;
    }
  i++;
  continue;
  }
  for(i ; s[i] >= '0' && s[i] <= '9'; i++){
    n = 10 * n + (s[i] - '0');
  }
    if (s[i]=='.'){
      i++;
      for(i; s[i] >= '0' && s[i] <= '9'; i++){
        x*=10;
        n = 10 * n + (s[i] - '0');
      }
    }
  return n/x*p;
}

int main(){
  char x[]= "-das123.456";
  printf("%lf",atof(x));
}