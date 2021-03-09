#include <stdio.h> 
  
int main() { 
  FILE *file; 
  int count = 1;
  char filename[100]; 
  char c;   

  file = fopen("file.txt", "r"); 
  if (file == NULL) { 
    printf("Could not open file"); 
    return 0; 
  } 

  for (c = getc(file); c != EOF; c = getc(file)) {
    if (c == '\n') {
      count += 1; 
    }
  }
  fclose(file); 
  printf("The file has %d lines\n ", count); 

  return 0; 
} 