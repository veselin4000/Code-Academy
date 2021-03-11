#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int symbPerLine = 60;
const int lines = 40;

void filePrint(FILE *file1, FILE *file2){
  int ch;
  int line = 0;
  int page = 1;
  while ((ch = getc(file1)) != EOF){
    putc(ch, file2);
    if (ch == '\n'){
      line = line + 1;
      if (line == lines){
        fprintf(stdout, "\nPage %d End.\n", page);
        page = page + 1;
        line = 0;
      }
    }
  }
}

int main(int argc, char *argv[]){
  FILE *file;int i=1;
  char *pr = argv[0];
  if (argc == 1){
    fprintf(stderr, "No files");
  }else{
    for(int i = 1; i<argc; i++){
      file = fopen(*(argv+i), "r");
      if (file == NULL){
        fprintf(stderr, "%s: can't open %s\n", pr,  *(argv+i));
        exit(1);
      }else{
        fprintf(stdout, "\nFile: %s\n\n", *(argv+i));
        filePrint(file, stdout);
        fclose(file);
      }
    }
  }
  if (ferror(stdout)){
      fprintf(stderr, "%s: error writing stdout\n", pr);
      exit(2);
  }
  return 0;
}