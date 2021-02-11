/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
*/
#include <stdio.h>

void sort ( int a[], int n){
  int temp;
  int *p = a;
  do{
    if (*p > *(p + 1) ) {
      temp = *p;
      *p = *(p + 1);
      *(p + 1) = temp;
      *p++;
    }
  }while(*p++);
}

int main(){
  int a[] = {2, 1, 3, 9, 5};
  int arrSize = sizeof(a) / sizeof(a[0]);
  sort(a, arrSize);
  printf("Sorted elements: ");
  for (int i = 0; i < arrSize; i++){
    printf("%d ", *(a+i));
  }
  return 0;
}