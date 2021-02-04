#include <stdio.h>
#include <string.h>

int getline(char s[], int lim){
  for (int i = 0; i < strlen(s) && i<lim; i++){
    if (s[i]=='\n'){
      return i;
    }
  }
}

int main(){
    char str[32];
    gets(str);
    int lenght;
    lenght = getline(str, 3);
    printf("%d", lenght);
    return 0;
}