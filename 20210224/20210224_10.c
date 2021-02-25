/*Задача 10.
 Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include <stdio.h>
#include <math.h>
#define AVG(x,y) ((x+y)/2)
#define AVG1(x,y,d) \
for(int i=(x);i<=(y);i++) \
 {p+=i;} \
  p/=(n)-(m);
#define POW(x,y) (pow(x,y))
#define TOUPPER(c) (c-32);
#define DISP(sqrt,k) printf("sqrt (%g) = %g\n",k,sqrt(k))

int main(){
  double p =0;
  int m=2,n=7;
  int a=AVG(10,20);
  printf("AVG(10,20) = %d\n",a);
  AVG1(m,n,p);
  printf("AVG2(%d,%d)=%.3lf\n", m, n, p);
  char c = TOUPPER('a');
  printf("TOUPPER('a')=%c\n",c);
  char d = POW(2,3);
  printf("POW(2,3)=%d\n",d);
  DISP(sqrt,3.0);
  return 0;
}