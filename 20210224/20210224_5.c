#include <stdio.h>
#ifdef DEBUG
 #define DEBUGMSG(msg) \
 { printf("DEBUG: %s\n", (msg)); }
#else
 #define DEBUGMSG(msg)
#endif 

int main(){
  DEBUGMSG("Message");
  return 0;
}