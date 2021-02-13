#include <stdlib.h>
#include <stdio.h>
int main(){
    int *piValue;
    int uSize = 0;

    printf("Enter size: ");
    scanf("%d", &uSize);
    piValue = (int *)malloc(uSize * sizeof(int));
    if (NULL == piValue){
        printf("Allocation memory error!\n");
        exit(1);
    }
    printf("Address: %u\n", piValue);
    printf("Enter the new size: ");
    scanf("%d", &uSize);
    piValue = realloc(piValue, uSize * sizeof(int));
    if (NULL == piValue){
        printf("Reallocation memory error!\n");
        exit(2);
    }
    printf("Address: %u\n", piValue);
    free(piValue);
    return 0;
}