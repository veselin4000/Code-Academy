#include <stdio.h>

int main(){
  FILE *fopen(const char *restrict name, const char *restrict mode);
  FILE *file = NULL;
  char*filename = "file.txt";
  file = fopen (filename, "wt");
  if(file!=NULL)
  printf("Failed to open %s.\n",filename);
  fclose (file);
  file = NULL;
  int rename (const char *oldname, const char *newname);
  if(rename ("C:\\Users\\Veselin\\Desktop\\Code-Academy\\20210308\\file.txt",
    "C:\\Users\\Veselin\\Desktop\\Code-Academy\\20210308\\file_copy.txt"))
  printf("Failed to rename file.");
  else
  printf("File renamed successfully.");
  remove ("file_copy.txt");

}