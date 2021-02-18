

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char smLetter(){return (rand()%(122 - 97)) + 1 + 97;}
char capLetter(){return (rand() % (90 - 65)) + 1 + 65;}
char symb(){return (rand()%(47 - 33)) + 1 + 33;}
char dig(){return (rand()%(57 - 48)) + 1 + 48;}


char(*funk_ptr[4])()={smLetter,capLetter,symb,dig};

void passGen(){
  int n ;
  int smallLet,capLet,symb,dig;
  srand(time(NULL));
  printf("Length:\n");
  scanf("%d",&n);
  char arr[n];
  char *s = arr;
  printf("Number of small letters:\n");
  scanf("%d",&smallLet);
  printf("Number of capital letters:\n");
  scanf("%d",&capLet);
  printf("Number of symbols:\n");
  scanf("%d",&symb);
  printf("Number of digits:\n");
  scanf("%d",&dig);
  int k;
  int ss;int pos=0;int a;
  while(pos<n){
    a=rand()%4;
    switch (a){
      case 0:
        if(smallLet>0){
          *(s+(rand()%n+1))=(*funk_ptr[0])();
          smallLet--;
          pos++;
        }break;
      case 1:
        if(capLet>0){
            *(s+(rand()%n+1))=(*funk_ptr[1])();
            capLet--;
            pos++;
            } break;
      case 2:
        if(symb>0){
          *(s+(rand()%n+1))=(*funk_ptr[2])();
          symb--;
          pos++;
          }break;
      case 3:
        if(dig>0){ *(s+(rand()%n+1))=(*funk_ptr[3])();
          dig--;
          pos++;
          }break;
      default: break;
    }
  }
  for (int i = 0; i < n; i++){
      printf("%c-%d ",arr[i],arr[i]);
    }
}

int main(){
  
  int x = 0;char *arr;
  passGen();
  return 0;
}