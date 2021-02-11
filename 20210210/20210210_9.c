#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char* passGen(){
  static char arr[]="aaaaaa";
  char *s=arr;
  char lowerCase;
  char upperCase;
  int n;
  srand(time(NULL));

  char pass[6];
  while(*s){
    n= rand()%2;
    if (n==1){
      lowerCase=rand()%(122-97)+1+97; 
      *(s)=lowerCase;
    }else{
      upperCase=rand()%(90-65)+1+65;
      *(s)=upperCase; 
    }
    s++;
  }
  return arr;
}

int main(){
  int x=0;
  do{
    printf("Generated password : ");
    printf("%s", passGen());
    printf("\nPress 0 for new password. 1 to exit.\n");
    scanf("%d",&x);
  }while (x!=1);
  return 0;
}