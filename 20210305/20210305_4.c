/*Задача 4.  Да се състави програма, с помощта на която 2
(3, 1) играчи могат да играят (с право на връщане на
ходовете) следната игра ЛАБИРИНТ: Трябва да се достигне
до финала, отбелязан с F. Числото във всяка клетка
показва броя стъпки по права линия, които могат да са
направят при следващия ход. Като се започне от горния
ляв ъгъл, са възможни само два хода
3324312
2423243
4232421
4412234
3233422
3242321
113342F*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int toInt = 48;
int main(){
  int i, j;
  int move, temp;
  char choice;
  srand(time(NULL));
  char *arr = malloc(25*sizeof(char));

  for (i = 0; i < 5; i++){
    for (j = 0; j < 5; j++){
      *((arr+i*5) + j) = rand()%3+49;
    }
  }

  *((arr+4*5)+4) = 'F';
  i=0;j=0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      printf("%c ", *((arr+i*5) + j));
    }
    printf("\n");
  }
  while (*((arr+i*5)+j) != 'F'){
    printf("Your move? 1(up), 2(right), 3(down), 4(left) ");
    scanf("%d", &move);
    switch (move){
      case 1: 
        if (i - ((*((arr+i*5)+j))-toInt)>=0){
          temp = i;
          i -= (*((arr+i*5)+j)-toInt);
        }else{
          printf("Wrong move. Try again.\n");break;
        }
      break;
      case 2:
        if (j + *((arr+i*5)+j)-toInt<5){
          temp = j;
          j += *((arr+i*5)+j)-toInt;
        }else{
          printf("Wrong move. Try again.\n");break;
        }
      break;
      case 3:
        if (i + *((arr+i*5)+j)-toInt<5){
          temp=i;
          i += *((arr+i*5)+j)-toInt;
        }else{
          printf("Wrong move. Try again.\n");break;
        }
      break;
      case 4:
        if (j-(*((arr+i*5)+j)-toInt)>=0){
          temp=j;
          j -= (*((arr+i*5)+j)-toInt);
        }else{
          printf("Wrong move. Try again.\n");break;
        }
      break;
      default: break;
    }

    for (int i = 0; i < 5; i++){
      for (int j = 0; j < 5; j++){
        printf("%c ", *((arr+i*5) + j));
      }
      printf("\n");
    }

    printf("Your move arr[%d][%d]\n", i, j);
    printf("Undo move? y/n\n");
    fflush(stdin);
    scanf("%c", &choice);
    if (choice == 'y'){
      if (move == 1 || move == 3){
        i = temp;
      }else if (move == 2 || move == 4){
        j = temp;
      }
      printf("Back to arr[%d][%d]\n", i, j);
    }
  }
}