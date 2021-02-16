#include <stdio.h>
#include <string.h>
static int count=0;
void swapp(char *arr,char *a,int n){
  char *b = "great";char *w="programmer";//strcpy(arr,w);
  int s=0,k=0,m=0,l=0;
  for (int i = 0; i < n; i++){
    if (arr[i]==a[k]){
      count++;
      k++;
      if (count==4){
        m=i-count+1; 
        while (*b){
          arr[m+l]=*(b++);
          l++;
        }
        arr[m+l]=' ';
        while (*w){
          arr[m+l+1]=*w;
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
  char *p = arr;
  char *a = "poor";
  
  int n=strlen(arr);
  swapp(arr,a,n);
  printf("%s",arr);
  return 0;
}