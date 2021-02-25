/*Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/
#include <stdio.h>
void debugMsg(const char *msg) {
#ifdef DEBUG
  printf("DEBUG: %s\n", msg);
#endif
}

int main(void){
  debugMsg("Lalala");
  return 0; 
}