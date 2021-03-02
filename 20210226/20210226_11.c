#include <stdio.h>
typedef struct{
  int a;
  struct t_a*p;
}t_a;

int main(){
  typedef t_a*t_p;
t_a s;
t_p a=(t_p)malloc(sizeof(t_a));

}