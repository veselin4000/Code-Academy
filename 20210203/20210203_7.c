#include <stdio.h>
int main(){
    int arr[10]={5,6,1,4,15,25,31,8,2,9};
    int *a;
    a=&arr[0];
    printf("arr[0] = %d, *a = %d, a (hex) = %0x\n", arr[0], *a, a);
    int arr1[10]={5,6,1,4,15,25,31,8,2,9};
    int *b;
    b=arr1; /* може и без & */
    printf("arr2[0] = %d, *b = %d, b (hex) = %0x\n", arr1[0], *b, b);
    return 0;
}