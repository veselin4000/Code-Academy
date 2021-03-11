#include <stdio.h>
#include <stdlib.h>

typedef struct{
  float weight;
  float weightPrice;
  float size;
  float sizePrice;
}order;
FILE *file=NULL;
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
  file=fopen("res.txt","wt");
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
      fclose(file);

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
  if (errno == 0){
    fprintf(file, "%s() : %s\n", __func__, "Success");
  }
  else{
    fprintf(file, "%s() - %d : %s", __func__, errno, strerror(errno));
    perror("Error ");
  }
  return o;
}

float sumPrice(order* orders,int br){
  float price=0;
  for(int i=0;i<br;i++){
    price+=orders[i].weightPrice;
    price+=orders[i].sizePrice;
  }
  if (errno == 0){
    fprintf(file, "%s() : %s\n", __func__, "Success");
  }
  else{
    fprintf(file, "%s() - %d : %s ", __func__, errno,strerror(errno));
    
  }
  return price;
}