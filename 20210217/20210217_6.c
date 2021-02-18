/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>

int countLetter(char *str){
    int count = 0;
    while (*str){
      if (*str == 'a'){
        count++;
      }
      *str++;
    }
  return count;
}

int main(){
  char str[] = "This is a string to test my idea for search in a char and ....";
  printf("The count of cymbol a is: %d\n", countLetter(str));
  return 0;
}

