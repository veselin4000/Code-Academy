/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

#include "c.h"

treeNode_t *roota= NULL;
treeNode_t *rootb= NULL;
treeNode_t *rootc= NULL;
treeNode_t *rootd= NULL;
treeNode_t *roote= NULL;

int main(void){
  int i;
  int arr1[13] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
  int arr2[13] = {12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
  int arr3[13] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
  int arr4[13] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
  int arr5[13] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
 
  for(i=0;i<13;i++){
    insert(arr1[i]);
  }
  
  printf("\n");
  preorder(roota);

  for(i=0;i<13;i++){
    insert(arr2[i]);
  }

  printf("\n");
  preorder(rootb);

  for(i=0;i<13;i++){
    insert(arr3[i]);
  }

  printf("\n");
  preorder(rootc);

  for(i=0;i<13;i++){
    insert(arr4[i]);
  }

  printf("\n");
  preorder(rootd);

   for(i=0;i<13;i++){
    insert(arr5[i]);
  }

  printf("\n");
  preorder(roote);
  return 0;
}