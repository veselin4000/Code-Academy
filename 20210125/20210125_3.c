#include <stdio.h>

int main(){
  char c;
  int spaceCount = 0;
  int tabCount = 0;
  int newLineCount = 0;
  while ((c = getchar()) != EOF){
    if (c == '\n'){
      newLineCount++;
    }else if (c == '\t'){
      tabCount++;
    }else if (c == ' '){
      spaceCount++;
    }
  }
  printf("Spaces: %d\n", spaceCount);
  printf("Tabs: %d\n", tabCount);
  printf("New lines: %d\n", newLineCount);
  return 0;
}