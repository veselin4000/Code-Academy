/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво.*/
#include "c.h"

treeNode_t *root = NULL,*t;

int main(){
    int i;
    int arr[10] = {6, 7, 11, 18, 22, 5, 2, 4, 1, 3};
    for(i = 0; i < 9; i++){
      insert(arr[i]);
    }
    t = root;
    preorder(t);
    printf("\nsearch_rec :%d", (search_rec(t, 10))->data);

    return 0;
}