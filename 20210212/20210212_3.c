/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/
#include <stdlib.h>
#include <stdio.h>
int main(){
    int *piValue;
    int size = 0;

    printf("Enter size: ");
    scanf("%d", &size);
    piValue = (int *)malloc(size * sizeof(int));
    if (NULL == piValue){
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Address: %u\n", piValue);
    printf("Enter the new size: ");
    scanf("%d", &size);
    piValue = realloc(piValue, size * sizeof(int));
    if (NULL == piValue){
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Address: %u\n", piValue);
    free(piValue);
    return 0;
}