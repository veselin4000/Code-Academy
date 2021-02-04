/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/
#include <stdio.h>

int binarySearch(int a[], int n, int x){
  int i = n/2; 
  if(x>a[i]){ 
    while(i<=n){
      if (a[i]==x){
        return i;
      }
      i++;
    }
  }else if(x<a[i]){
    while(i>=0){
      if (a[i]==x){
        return i;
      }
      i--;
    }
  }else if (x==a[i]){
    return i;
  }
  return -1;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("%d is on position %d", x, binarySearch(a,n,x));
}