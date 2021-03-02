/*Задача 17. Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  int diam;
  float thickness;
}watMel;

int main(){
  srand((unsigned)time(NULL));
  int a, b;
  printf("How many melon watermelons?");
  scanf("%d", &a);
  printf("How many pumpkin watermelons?");
  scanf("%d", &b);
  watMel *melons = malloc(a *sizeof(watMel));
  watMel *pumpkins = malloc(b *sizeof(watMel));
  float x;
  int avgDiamMelons, avgDiamPumpkins, sumDiamMel=0, sumDiamPump=0;
  float avgThicknessMelons, avgThicknessPumpkins, sumThicknessMel=0, sumThicknessPump=0;

  for(int i = 0; i < a; i++){
    x = ((double)rand() / RAND_MAX) * (3.5 - 0.5) + 0.5;
    melons[i].thickness = x;
    sumThicknessMel = sumThicknessMel + melons[i].thickness;
    
    melons[i].diam=rand()%126+15;
    sumDiamMel=sumDiamMel + melons[i].diam;
    printf("Watermelon(melon): Diameter = %d Thickness = %f\n",
          melons[i].diam,melons[i].thickness);
  }

  avgDiamMelons = sumDiamMel / a;
  avgThicknessMelons = sumThicknessMel / (float)a;

  for(int i = 0; i < b; i++){
    x = ((double)rand() / RAND_MAX) * (0.9 - 0.3) + 0.3;
    pumpkins[i].thickness=x;
    sumThicknessPump = sumThicknessPump + pumpkins[i].thickness;

    pumpkins[i].diam=rand()%96+35;
    sumDiamPump=sumDiamPump+pumpkins[i].diam;
    printf("Watermelon(pumpkin): Diameter = %d Thickness = %f\n",
          pumpkins[i].diam,pumpkins[i].thickness);
  }

  avgDiamPumpkins = sumDiamPump / b;
  avgThicknessPumpkins = sumThicknessPump / (float)b;
  float totalMelons = (float)avgDiamMelons-avgThicknessMelons;
  float totalPumpkins = (float)avgDiamPumpkins-avgThicknessPumpkins;

  if(totalMelons > totalPumpkins){
    printf("It is better to buy %d watermelons from melons type with diameter %d and width %f,"
          "than %d watermelons from pumpkin type with diameter %d and width %f ",
          a, avgDiamMelons,avgThicknessMelons ,b, avgDiamPumpkins, avgThicknessPumpkins);
  }else{
    printf("It is better to buy %d watermelons from pumpkins type with diameter %d and width %f,"
          "than %d watermelons from melon type with diameter %d and width %f ",
          b, avgDiamPumpkins, avgThicknessPumpkins, a, avgDiamMelons, avgThicknessMelons);
  }
  
  free(melons);
  free(pumpkins);
  return 0;
}