#include <stdio.h>
int main(){
    int arr[]={100,90,80,70,60,50,40,30,20,10};
    /* 100- 1ви елемент, 90-2ри, 80-3ти..... 10-10ти ел.*/
    int *p;
    p=arr;
   
    *(p+2)=5; /*arr[2]=5*/ 
    *(p+3)=33; /*arr[3]=33*/
    *(p+4)-=7; /*arr[4]-=7*/
    *(p+6)+=10; /*arr[6]+=10*/
    *(p+9)*=3; /*arr[9]*=3*/
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ",*(p+i));
    }
    return 0;
}