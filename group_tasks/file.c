#include <stdio.h>
#include<stdlib.h>

int biggestNum(int *arr){
  int biggest =0;
for (int i = 0; i < 5; i++){
  if (biggest<arr[i]){
        biggest=arr[i];
  }

}
return biggest;

}

int main(int argc, char* argv[]){
        int data[50];
        for( int i=0;i<argc;i++){
                data[i]=atoi(argv[i]);
        }
        printf("%d\n",biggestNum(data));
        return 0;
}

