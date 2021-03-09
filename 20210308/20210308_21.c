/*Задача 21:
 Напишете стандартната програма за Linux wc, която приема име на
файл като аргумент от командния ред и изкарва на стандартния изход
стринга "Брой думи: ", последван от броя думи във файла. Програмата да
приема три вида аргументи:
 -c - който да изкарва "Брой символи: "
 -l - който да изкарва "Брой редове: "
 -w - който е за брой думи(тоест стандартното поведение на
програмата)
Ако един два или три от тези аргументи са подадени да не се взема
предвид стандартното поведение.
 Примери:
 > wc f1 // изкарва броя думи
 > wc -с f1 // изкарва броя символи
 > wc -l f1 // изкарва само броя редове
 > wc -c -w f1 // изкарва броя символи и броя думи във f1*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char** argv){
int bytes = 0;
int words = 0;
int newLine = 0;
char buffer[1];
enum states { WHITESPACE, WORD };
int state = WHITESPACE;
 if ( argc !=2 ){
  printf( "Help: %s filename", argv[0]);
 }
 else{
  FILE *file = fopen( argv[1], "r");

  if(file == 0){
    printf("can not find :%s\n",argv[1]);
  }
  else{
    char *thefile = argv[1];
    char last = ' '; 
    while (read(fileno(file),buffer,1) ==1 ){
      bytes++;
      if ( buffer[0]== ' ' || buffer[0] == '\t'  ){
        state = WHITESPACE;
      }
      else if (buffer[0]=='\n'){
        newLine++;
        state = WHITESPACE;
      }else{
        if ( state == WHITESPACE ){
          words++;
        }
        state = WORD;
      }
      last = buffer[0];
    }        
    printf("%d %d %d %s\n",newLine,words,bytes,thefile);        
  }} 

}