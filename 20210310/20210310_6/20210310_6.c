#include "alarm.h"
extern i;
extern j;

int main(){
  signal(SIGALRM, alarm_me);
  alarm(1);
  if (setjmp(Env) != 0) {
    printf("Gave up: j = %d, i = %d\n", j, i);
    exit(1);
  }
  T0 = time(0);
  for (j = 0; j < 10000; j++) {
    for (i = 0; i < 1000000; i++);
  }
}