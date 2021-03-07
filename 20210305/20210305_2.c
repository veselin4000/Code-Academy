/*Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float weight;
  float weightPrice;
  float size;
  float sizePrice;
}order;

static float sumWeight,sumSize;
order add(float weight,float size);
float sumPrice(order* orders,int size);
int itemWeight[]={20, 50, 100, 200, 350, 500, 1000, 2000, 3000};
int itemWeightPrice[]={46, 69, 102, 175, 213, 244, 320, 427, 503 };
int itemSize[]={10, 50, 100, 150, 250, 400, 500, 600};
int itemSizePrice[] = {1, 11, 22, 33, 56, 150, 311, 489, 579};

int main(){
  int count,br;
  float totalSize,totalWeigth;
  float size, weight, price;

  printf("How many packages to send?");
  scanf("%d", &br);
  order *orders=(order*)malloc(br*sizeof(order));

  while (count<br){
    printf("Enter item weight:");
    scanf("%f", &weight);
    printf("Enter item size:");
    scanf("%f", &size);
    
    orders[count] = add(weight, size);
    totalSize += size;
    totalWeigth += weight;
    count++;
  }
  order oneOrder = add(totalWeigth,totalSize);
  float sumprice=sumPrice(orders,br);
  if (oneOrder.sizePrice+oneOrder.weightPrice>sumSize-oneOrder.sizePrice+sumWeight-oneOrder.weightPrice){
    printf("For packages with weight %f and size %f is better to send separately for %f leva.",
          totalWeigth,totalSize,sumprice);
  }else{
    printf("For packages with weight %f and size %f is better to send together for %f leva.",
          totalWeigth,totalSize,oneOrder.sizePrice+oneOrder.weightPrice);  
  }
  free(orders);
}

order add(float weight, float size){
  float wPrice, sPrice;
  int i;
  for (i = 0; i < 7; i++){
    if (weight > itemWeight[i] && weight <= itemWeight[i+1]){
      wPrice=itemWeightPrice[i];
    }
  }

   if (weight < itemWeightPrice[0]){
    wPrice = itemWeightPrice[0];
  }
  if (weight >= itemWeightPrice[i+1]){
    wPrice = itemWeightPrice[i+1];
  }
  for ( i = 0; i < 7; i++){
    if (size > itemSize[i] && size <= itemSize[i+1]){
      sPrice = itemSizePrice[i+1];
    } 
  }
   if (size < itemSizePrice[0]){
    sPrice = itemSizePrice[0];
  }
  if (size >= itemSizePrice[i+1]){
    sPrice = itemSizePrice[i+1];
  }
  sPrice /= 100;
  wPrice /= 100;
  order o = {weight, wPrice, size, sPrice};
  sumWeight += wPrice;
  sumSize += sPrice;
  return o;
}

float sumPrice(order* orders,int br){
  float price=0;
  for(int i=0;i<br;i++){
    price+=orders[i].weightPrice;
    price+=orders[i].sizePrice;
  }
  return price;
}