/*Задача 13.
Ако x е реално число, а y — естествено, то степен се
дефинира по следния начин: x на степен y = x.x. ... .x (y пъти)
Когато y < 0, то x на y = 1 / x -y . Валидни са свойствата (x 0):
x y = x y-1 .x x y = x y+1/x x y1+y2 = x y1 .x y2 x y1 .y2 = (x y1 )
y2
Тривиалната реализация за пресмятане на x y е чрез
извършване на y последователни умножения.*/
#include <stdio.h>
int main(){
  int x, y;
  int res = 1;
  printf("Enter value for x: ");
  scanf("%d", &x);
  printf("Enter value for y: ");
  scanf("%d", &y);
  for (;y>0;y--){
    res *= x;
  }
  printf("result = %ld", res);
  return 0;
}