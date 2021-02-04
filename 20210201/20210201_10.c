/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/
#include <stdio.h>
#include <string.h>

void reverse(char *s){
    char temp;
    for (int i = 0, j = strlen(s) -1; i < j; i++, j--){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void itob(int n, char *s, int b){
    int i=0;
    int m;
    do{
       m=n%b;
       if(m>9){
            s[i]= m +'a'-10;
       }else{
            s[i]=n%b + '0';
       }
       n=n/b;
       i++;
       if(n==0){
           s[i]='\0';
       }
    }while (n!=0);
    reverse(s);
    printf("%s\n",s);
}

int main(){
    int num=13;
    int a;
    char arr[32];
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter numeric system: ");
    scanf("%d", &a);
    itob(num,arr,a);
}