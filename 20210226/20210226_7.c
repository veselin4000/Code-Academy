/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/
#include <stdio.h>

typedef struct{
  int number;
  char *str;
}t_key;

int main(){
  int i;
  t_key arr[32] = {
    {0, "auto"},
    {1, "break"},
    {2, "case"},
    {3,"char"},
    {4, "continue"},
    {5, "do"},
    {6, "default"},
    {7, "const"},
    {8, "else"},
    {9, "enum"},
    {10, "extern"},
    {11, "for"},
    {12, "float"}, 
    {13, "if"}, 
    {14, "goto"}, 
    {15,"int"},
    {16,"long"},
    {17,"register",},
    {18, "return"},
    {19,"signed"},
    {20, "static"}, 
    {21, "sizeof"},
    {22,"short"}, 
    {23, "struct"}, 
    {24, "switch"}, 
    {25, "typedef"},
    {26, "union"}, 
    {27, "void"}, 
    {28, "while"},
    {29,"volatile"},
    {30,"unsigned"}
  };
  for (i = 0; i < 31; i++){
    printf("%d %s\n", arr[i].number, arr[i].str);
  }
  return 0;
}