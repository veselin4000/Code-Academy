#include <stdio.h>
#include <stdlib.h>
#include "c.h"
const char ones ='/';
const char tens ='n';
const char hundr ='9';
const char thous ='8';
const char tenThous ='r';
int count;

char swit(int i){
  switch (i){
    case 0:
      return ones;
      break;
    case 1:
      return tens ;
      break;
    case 2:
      return hundr ;
      break;
    case 3:
      return thous;
      break;
    case 4:
      return tenThous ;
      break;
     
    default:
      break;
    }
}

void writeToFile(int *arr){
  
  for (int i = 1, j=0; j <= 4; i*=10, j++){
    count+=*(arr+j)*i;
  }
  int temp=count;

  FILE *fp = NULL;
  fp = fopen("OUT2.txt" , "a");

  for (int i = 0; count!=0; i++){
    temp=count%10;
    count/=10;
    for (int j=temp; j > 0; j--){
      fprintf(fp,"%c",swit(i));
    } 
  }
  fprintf(fp,"\n");
  fclose(fp);
}
