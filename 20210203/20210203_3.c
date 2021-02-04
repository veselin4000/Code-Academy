/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include <stdio.h>

int linSearch(int a[], int l, int d){
int pos[l];int j=0;
  for (int i = 0; i < l; i++){
    if (a[i]==d){
      pos[j]=i;j++;
    }
  }
  if (j==0){
   return -1;
  }else{
    printf("Positions of equal numbers:");
    for (int i = 0; i < j; i++){
      printf("%d ",pos[i]);
    } 
  }
}

int main(){
int a[] = {1, 5, 2, 7, 7};
int len = sizeof(a)/sizeof(a[0]);
int num =8;
 linSearch(a, len, num);
  return 0;
}