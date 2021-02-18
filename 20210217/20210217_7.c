/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */
#include <stdio.h>
#include <stdlib.h>

int *countLetters(char *str){
    int *p = NULL;
    p = (int *)calloc(26, sizeof(int));
    int i;
    while (*str){
      if (*str >= 'a' && *str <= 'z'){
        i = *str - 'a';
        (*(p + i))++;
      }
      *str++;
    }

    for (i = 0; i < 26; i++){
      printf("%c occurs %d times in the sentence.\n", (i + 'a'), *(p + i));
    }
    return p;
    free(p);
}

int main(void){
  char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
  int *ptr;
  ptr = countLetters(str);
  return 0;
}
