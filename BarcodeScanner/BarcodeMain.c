#include <stdio.h>
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
    int sum=0,i=1,count=pos;
    while(count>4){
        count++;
        *arr++;
        sum+=(((pos-4-i)%10+1)*(*arr));
        i++;count--;
    }
    sum=sum%11;
    return sum==*(arr+1);
}

int checkK(int* arr){
    int sum=0,i=1,count=pos;
    while(count>3){
        *arr++;
        sum+=(((pos-4-i+1)%9+1)*(*arr));
        i++;count--;
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
