#include <stdio.h>

char *month_name(int n);
static char *name[] = {
  "Illegal month",
  "January", "February", "March",
  "April", "May", "June",
  "July", "August", "September",
  "October", "November", "December"
};

int main(){
  int n;
  printf("Enter number for month(1-12)");
  scanf("%d",&n);
  if (n>0&&n<12){
  printf("%s",month_name(n));
  }else{
    printf("%s",month_name(0));
  }
}

char *month_name(int n){
  return name[n];
}