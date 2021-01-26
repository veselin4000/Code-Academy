#include <stdio.h>
#include <ctype.h>

int main(){
  int digitCounter = 0;
  int letterCounter = 0;
  char c;
  while ((c=getchar())!=EOF){
    if (isdigit(c)){
      digitCounter++;
      continue;
    }else if ((c >= 65&&c <= 90)||(c >= 97&&c <= 122)){
      letterCounter++; 
    }
  }
  printf("Cifri: %d\n"
        "Bukvi: %d",digitCounter, letterCounter);
  return 0;
}