#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"
int main(){
    int size;
    printf("Enter amount of numbers:");
    scanf("%d",&size);
    float inputArr[size];
    char convertedArr[size];
    for (int i = 0; i < size; i++){
        scanf("%f",&inputArr[i]);
    }
    static int convArrPos=0;
    for (int pos = 0; pos < size-2; pos++){
        if (inputArr[pos]>=0.5){
            if (inputArr[pos+1]<0.50&&inputArr[pos+2]<0.50){
                convertedArr[convArrPos]='1';
                convArrPos++;
            }else if (inputArr[pos+1]<0.50){
                convertedArr[convArrPos]='0';
                convArrPos++;
            }else{
                continue;
            }
        } 
    }
    
    char reversed[size];
    for (int i = convArrPos-1-convArrPos%5 ,j=0; i >= 0; i--,j++){
       reversed[j] = convertedArr[i];
      }
    if(!test(convertedArr)){
        test(reversed);
    }
}
