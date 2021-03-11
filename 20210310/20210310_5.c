#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handleSignal(int iSignal){
  printf("\nHandle signal %d\n", iSignal);
}

int main() {
  signal(SIGABRT, handleSignal);
  signal(SIGINT, handleSignal);
  signal(SIGABRT, handleSignal);
  for(;;){
  sleep(1);
  }
  return 0;
}