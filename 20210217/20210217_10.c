/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int count=0;int i,j,len=0;
  int arr[200];
  for (i = 2; i < 100; i++){
    for (j = 1; j <= i; j++){
      if(i%j==0){
        count++;
      }
    }
    if (count==2){
      (arr[len++])=i;
      count=0;
    }else{
      count=0;
    }
  }  
  int a;
  printf("Enter number to check: ");
  scanf("%d",&a);
 
  int flag=0;
  for (int i = 0; i < len; i++){
    if (a==arr[i]){
     flag=1;
    }
  }
  if(flag==1){
  printf("%d is prime",a);
  }else{
    printf("%d is not prime",a);
  }
}
  
