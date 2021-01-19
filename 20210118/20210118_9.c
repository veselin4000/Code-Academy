#include <stdio.h>
int main(){
  int iX = 13;
  int iY = 44;
  int iResult = 0;
  iResult = iX - iY;
  printf("%d - %d = %d \n", iX, iY, iResult);
  iResult = iY / iX;
  printf("%d / %d = %d \n", iY, iX, iResult);
  iResult = iY % iX;
  printf("%d / %d Remainder: %d\n", iY, iX, iResult);
  float a=10.55;
  float b = 5.38;
  float res = 0;
  res = a * b;
  printf("%f * %f = %f\n", a, b, res);
  res = a + b;
  printf("%f + %f = %f\n", a, b, res);
  return 0;
}
