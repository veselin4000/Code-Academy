/*Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отново.*/
#include <stdio.h>

int main(){
  int arr[]={1,3,9,7,9};
  int arr2[]={2,4,6,8,10};
  int arr3[10];
  for (int i = 0,j=0,k=0; i < 5,j < 5; ){
    
      if (arr[i]<arr2[j]){
        arr3[k]=arr[i];i++;k++;
      }else{
        arr3[k]=arr2[j];j++;k++;
      }
  }
  for (int k = 0; k < 10; k++){
    printf("%d ",arr3[k]);
  }
}