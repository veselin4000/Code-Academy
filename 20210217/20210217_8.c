/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>

int *fibonacci(int *p, int n){
    int i;
    *(p + 0) = 0;
    *(p + 1) = 1;
    for (i = 2; i < n; i++){
        *(p + i) = *(p + i - 1) + *(p + i - 2);
    }
    for (i = 0; i < n; i++){
        printf("%d ", *(p + i));
    }
    return p;
}

int main(void){
    int arr[10];
    int *arrptr = arr;
    int *p;
    printf("Fibonacci is :\n");
    p = fibonacci(arrptr, 10);
    return 0;
}