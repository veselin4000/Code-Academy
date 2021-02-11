/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/
#include <stdio.h>
#include <string.h>

int main(){
  char input[32];
  char *p = input;
  char c;
  printf("Enter a message: ");
  while ((c = getchar()) != '\n'){
    *p++ = c;
  }
  for (int j = strlen(input) - 1; j >= 0; j--){
    printf("%c", *(input+j));
  }
  return 0;
}