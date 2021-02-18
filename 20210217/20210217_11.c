/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char smLetter(){return rand() % (122 - 97) + 1 + 97;}
char capLetter(){return rand() % (90 - 65) + 1 + 65;}
char symb(){return rand()%(47 - 33) + 1 + 33;}
char dig(){return rand()%(57 - 48) + 1 + 48;}


char(*funk_ptr[4])()={smLetter,capLetter,symb,dig};

char* passGen(){
  static char arr[] = "aaaaaa";
  char *s = arr;
  int n;
  
  while(*s){ 
    n = rand() % 4;
    *s=(*funk_ptr[n])();
    *s++;
  }
  return arr;
}

int main(){srand(time(NULL));
  int x = 0;
  do{
    printf("Generated password : ");
    printf("%s", passGen());
    printf("\nPress 0 for new password. 1 to exit.\n");
    scanf("%d", &x);
  }while (x != 1);
  return 0;
}