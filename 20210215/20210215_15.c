/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.
*/
#include <stdio.h>

void cpy(char *ptrFrom,char *ptrTo){
  while(*(ptrFrom)){
    *(ptrTo++) = *(ptrFrom);
    ptrFrom++;
  }
}

int main(){
  char *arr="A string to be copied.";
  char *arr1="I am very good in string copying!";
  char arr3[32],arr4[32];
  cpy(arr,arr3);
  printf("%s\n", arr3);
  cpy(arr1,arr4);
  printf("%s", arr4);
  return 0;
}