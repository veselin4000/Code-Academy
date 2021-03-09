#include <stdio.h>

int main(){
  int count =0;
  FILE *file1, *file2; 
  char filename[100], c;
  int delRow;
  printf("Row to delete:");
  scanf("%d", &delRow); 

  file1 = fopen("file.txt", "r"); 
  if (file1 == NULL) { 
    printf("Cannot open file %s \n", filename); 
    return -1;
  } 
  file2 = fopen("test.txt", "w"); 
  if (file2 == NULL) { 
    printf("Cannot open file %s \n", filename); 
    return -1;
  }
  while ((c= fgetc(file1) )!= EOF) { 
    if (c=='\n'){
      count++;
    }
    if (count ==delRow-1){
      continue;
    }
    fputc(c, file2); 
  } 
  printf("\nContents copied to %s", filename); 

  fclose(file1); 
  fclose(file2); 
  return 0; 
}