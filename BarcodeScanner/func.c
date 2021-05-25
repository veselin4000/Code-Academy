#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<stdbool.h>

int pos=0;
int test(char *newArr);
char encoding[25][10]={"00001","10001","01001","11001",
                    "00101","10100","01100","00011",
                    "10010","10000","00100","00110"
                    };

int* func(char *inputArr){
    pos=0;
    char converted[25][6];
    int *outputArr=(int*)calloc(20,sizeof(int));
    for (int i =0,a=0; i <= 50 ;i+=5,a++){
        memcpy(&converted[a],&inputArr[i],5);
        converted[a][5]='\0';
    }
    
    for (int j = 0; j <= 10; j++){
        for (int k = 0; k < 12; k++){
            if(strstr(encoding[k],converted[j])!=NULL){
                *(outputArr+pos)=k;
                pos++;
                break;
            }
        }
    }
    return outputArr;
}

int checkC(int* arr){
    int sum=0,i=1,count,currPos=pos;
    while(currPos>4){
        count++;*arr++;
        sum+=(((pos-4-i)%10+1)*(*arr));
        i++;currPos--;
    }
    sum=sum%11;
    return sum==*(arr+1);
}

int checkK(int* arr){
    int sum=0,i=1,count,currPos=pos;
    while(currPos>3){
        count++;*arr++;
        sum+=(((pos-4-i+1)%9+1)*(*arr));i++;currPos--;
    }
    sum=sum%11;
    return sum==*(arr+1);
}

int wholeBarc(int* arr){
    int count=0;
    while(*arr){
        if (*arr==11){
            count++;
        } 
        *arr++;
    }
    if(count==2){
        return true;
    }else if(count==1){
        printf("Barcode truncated. ");
        if(*(arr-1)==11){
            printf("Move the scanner to the left.");
        }else{
            printf("Move the scanner to the right.");
        }    
    return false;
    }
}

int test(char *newArr){
    int *p=func(newArr);
    
    if(!wholeBarc(p)){return false;}
    if(!(checkK(p)&&checkC(p))){
        printf("Invalid Barcode");return false;
    }else{
        int i=0;
        while(*p++){
            i++;
            if (*p==10){
                printf("-");
            }else{
                printf("%d",*p);
            }
            if((pos-4)==i){
                break;
            }
        }
    return true;
    }
}
