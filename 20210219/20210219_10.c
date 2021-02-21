
#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(void){
  int i, j;
  char matrix[10][20];
  struct point a = { 2, 3};
  struct point b = { 7, 7};
  struct point c = {b.x, a.y};
  for (i = 0; i < 10; i++){
    for (j = 0; j < 20; j++){
      matrix[i][j] = '-';
    }
  }

  for (i = c.x; i >= a.x; i--){
    for (j = i + 1; j >= a.y; j--){
      matrix[i][j] = '@';
      matrix[i][j + 9] = '@';
    }
  }
  for (int i = 0; i < 10; i++){
    for (int j = 0; j < 20; j++){
      printf("%c", matrix[i][j]);
    }
    printf("\n");
  }
}