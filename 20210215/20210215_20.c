#include <stdio.h>
#include <string.h>
static int count=0;
void swapp(char *arr,int n){
  char *a = "poor";
  char *b = "great";
  char *w="programmer";
  int k=0,start=0,l=0;
  for (int i = 0; i < n; i++){
    if (arr[i]==a[k]){
      count++;
      k++;
      if (count==strlen(a)){
        start=i-count+1; 
        while (*b){
          arr[start+l]=*(b++);
          l++;
        }
        arr[start+l]=' ';
        while (*w){
          arr[start+l+1]=*w;
          *w++;
          l++;
        }
        return ;
      }
    }else{
      k=0;
    }
  }
}

int main(){
  char arr[] = "I am a poor programmer";
  int n=strlen(arr);

  swapp(arr,n);
  printf("%s",arr);
  return 0;
}