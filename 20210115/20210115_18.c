  
#include <stdio.h>

int main(){
  const  int cenaKar = 90;
  const  int cenaKemp = 100;
  int brKar = 3;
  int brKemp = 3;
  static int sum= 0;
  int rez = 0;
  int otg[1];
  while (1){
    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    printf("Ako zhelaete karavana natisnete 1\n");
    printf("Ako zhelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    if (rez == 1){
      if (brKar==0){ 
        printf("Nqma nalichni karavani.Molq izberete drugo.\n");
        continue;
      }
      sum+=90;
      brKar--;
    }else if (rez == 2){
      if (brKemp==0){
        printf("Nqma nalichni kemperi.Molq izberete drugo.\n");
        continue;
      }
      sum+=100;
      brKemp--;
    }else{
      printf("Greshen izbor.Opitaite otnovo.\n");
      continue;
    }
    printf("Zhelaete li oshte neshto? y/n\n");
    scanf("%s",&otg);
    if (otg[0]!='y'){
      break;
    }
  }
  printf("Dalzhima suma: %d\n",sum);
}