#include <stdio.h>

int main(){
  char cValue = 'b';
  printf("\n%d\n",sizeof(cValue));
  int iValue = 100;
  printf("\n%d\n", sizeof(iValue));
  float fValue = 3.14;
  printf("\n%d\n",sizeof(fValue));
  short sValue = 25000;
  printf("\n%d\n",sizeof(sValue));
  unsigned long ulValue = 10000224;
  printf("\n%d\n",sizeof(ulValue));

  long long int lValue = 11111111;
  printf("\n%d\n", sizeof(lValue));
  return 0;
}