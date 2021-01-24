#include <stdio.h>

int main(){
  float fYards;
  float fKms;
  float fYardsToMeters = 0;
  float fKmToMiles = 0;
  unsigned char cChoice = 1;
  int count=0;
  float array[64];
  while (cChoice == 1){ 
    printf("\nEnter yards: ");
    fflush(stdin); //изчиства буфера
    if (scanf("%f", &fYards) == 0 ){ //проверява дали сканф е прочело успешно, сканф брои успешно прочетените символи
      printf("Error\n");
      continue;
    }
    array[count]=fYards; //запазваме стойността за ярдовете в масива
    exp:
    printf("Enter KMs: ");
    fflush(stdin); //изчиства буфера
    if (scanf("%f", &fKms) == 0 ){ //проверява дали сканф е прочело успешно, сканф брои успешно прочетените символи
      printf("Error\n");
      goto exp;    
    }
    array[count+1]=fKms;//запазваме стойността за километрите в масива
    if (fYards >= 0 && fKms >= 0){
      count+=2; // следи броя на елементите в масива, +2 е защото запазваме ярдовете и километрите
      printf("\n------------------------------------------\n");
      printf("|  Yards  |  Meters || Kmeters |  Miles  |\n");
      for (int j = 0; j < count; j+=2){
        fYardsToMeters = array[j] * 0.9144;
        fKmToMiles = array[j+1] / 1.609344;
        printf("------------------------------------------\n");
        printf("| %7d | %7d || %7d | %7d |\n",
        (int)array[j], (int)(fYardsToMeters), (int)array[j+1], (int)(fKmToMiles));   
      }
      printf("------------------------------------------\n");
    }else{
      printf("\nPlease enter only positive numbers\n");
      continue;
    }
    newcChoice: //label
    fflush(stdin);
    printf("\nTo continue press 1\nTo stop press 0\n");
    if (scanf("%d", &cChoice)==0||cChoice>1 ){
      printf("Invalid input");
      goto newcChoice;
    }
  }
  return 0;
}