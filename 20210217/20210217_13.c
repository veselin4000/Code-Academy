/*Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/
#include <stdio.h>
#include  <string.h>
void reverse(char s[],int n){
    char c[n];dasdsas
    for (int i=n-1, j=0 ; i >= 0; i--, j++){
        c[j] = s[i];
    }
    printf("%s",c);
}
int main(){
  int length;
  printf("String length: ");
  scanf("%d",&length);
  char s[length+1];
  for(int i=0; i<=length; i++){
    scanf("%c",&s[i]);
  }
  reverse(s,length+1);
  return 0;
}