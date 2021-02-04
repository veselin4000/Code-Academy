/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
#include <string.h>

void squeeze(char s[], int c){
    int i=0,j=0;
    for(i; i<strlen(s);i++){
            if(s[i]!=c){
                s[j]=s[i];
                j++;
            }
        }
        s[j]='\0';
        printf("%s",s);
    }

int main(){
    char str[32];
    char c;
    printf("Letter to remove: ");
    scanf("%c", &c);
    printf("Type something:  ");
    scanf("%s", &str);
    
    squeeze(str,c);
    return 0;
}