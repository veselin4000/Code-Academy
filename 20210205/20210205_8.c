/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>
#include <string.h>

void reverse(char *s){
  char temp;
  for (int i = 0, j = strlen(s) -1; i < j; i++, j--){
    temp = *(s+i);
    *(s+i) = *(s+j);
    *(s+j) = temp;
  }
}

int atoi(char *s){
  int n = 0;
  int i;
  for (i = 0; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '\0'; i++){
    n = n * 10 + (*(s+i) - '0');
  }
  return n;
}

void itoa(int n, char *s){
  int i=0;
  do{
    *(s+i)=n%10 + '0';
    n=n/10;
    i++;
  }while (n!=0);
  reverse(s);
  printf("%s\n",s); 
}

double atof(char *s){
  double n = 0, m = 0, pow = 1.0;
  int i;
  for (i = 0; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '.'; i++){
    n = n * 10 + (*(s+i) - '0');
  }
  for (i = i + 1; (*(s+i) >= '0' && *(s+i) <= '9') && *(s+i) != '\0'; i++){
    m = m * 10 + (*(s+i) - '0');
    pow *= 10;
  }
  m=m/pow;
  return n+m;
}

int main(){
  char *str="123";
  printf("atoi: %d\n",atoi(str));
  printf("itoa : ");
  char *itoaStr;
  itoa(123456,itoaStr);
  reverse(itoaStr);
  printf("Reversed: %s\n",itoaStr);
  char *atofStr="2.12";
  printf("atof: %f\n",atof(atofStr));
  return 0;
}