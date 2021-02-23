/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/
#include <stdio.h>

union un{
  unsigned short a:6;
  char b:6;
};

int main(){
  union un u;
  u.a=10;
  printf("short: %d\n",u.a);
  u.b='c';
  printf("char: %c\n",u.b);
  printf("int:%d char: %c\n",u.a, u.b);
  return 0;
}