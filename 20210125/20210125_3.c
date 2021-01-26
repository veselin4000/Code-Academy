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
  printf("Spaces: %d\n"
        "Tabs: %d\n"
        "New lines: %d\n", spaceCount, tabCount, newLineCount);
  return 0;
}