/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include <stdio.h>
void lower(char *s){
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
}

int main(){

    char s[32];
    printf("Enter a string:  ");
    gets(s);
    lower(s);
    printf("%s",s);
}