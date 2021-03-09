#include <stdio.h>
int main(){
int i;
  long count;
  char ch, ch1;
  FILE *file1, *file2;

  if (file1 = fopen("file.txt", "r")){
    file2 = fopen("test.txt", "w");
    fseek(file1, -1L, 2);
    long last_pos = ftell(file1);
    last_pos++;
    count=last_pos;

    fseek(file1, -1L, 2);

    while (count){
      ch = fgetc(file1);
      fputc(ch, file2);
      fseek(file1, -2L, 1);
      count--;
    }
    printf("\n**File copied successfully in reverse order**\n");
  }else{
    perror("Error occured\n");
  }
  fclose(file1);
  fclose(file2);
}
