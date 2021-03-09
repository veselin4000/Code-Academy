#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *inputFile = fopen("file.txt", "rt");
    if (NULL == inputFile) {
      printf("ERROR: cannot open the file\n");
      return -1;
    }

    FILE *outputFile = fopen("test.txt", "wt");
    if (NULL == inputFile) {
      printf("ERROR: cannot open the file\n");
      return -1;
    }

    int c;
    while (EOF != (c = fgetc(inputFile))) {
      fputc(toupper(c), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}