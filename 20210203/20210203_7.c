/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?*/
#include <stdio.h>
int main(){
    int arr[10]={5,6,1,4,15,25,31,8,2,9};
    int *a;
    a=&arr[0];
    printf("arr[0] = %d, *a = %d\n", arr[0], *a, a);
    int arr1[10]={5,6,1,4,15,25,31,8,2,9};
    int *b;
    b=arr1; /* може и без & */
    printf("arr2[0] = %d, *b = %d\n", arr1[0], *b, b);
    return 0;
}