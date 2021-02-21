#include "20210219_14.h"
#include <stdio.h>
void input(struct worker company[]){
for(int i=0; i<2; i++){
    printf("Enter the worker's id: ");
    scanf("%d",&company[i].id);
    printf("Enter the worker's first name: ");
    scanf("%s",company[i].fName);
    printf("Enter the worker's middle name: ");
    scanf("%s",company[i].mName);
    printf("Enter the worker's last name: ");
    scanf("%s",company[i].lName);
    printf("Enter the worker's years in the company: ");
    scanf("%d",&company[i].workYears);
    printf("Enter the worker's salary: ");
    scanf("%lf",&company[i].salary);
  }
}