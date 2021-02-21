#include "20210219_14.h"
#include <stdio.h>
#include <string.h>

int main(){
  struct worker company[10];
  input(company);
    int n=0;
    for(int i=0;i<2;i++){
      printf("Enter manager's id for worker %s %s",company[i].fName, company[i].lName);
      scanf("%d",&n);
      for(int j=0; j<2; j++){
        if(n==company[j].id){
          company[i].manager=&company[j];
        }
      }
    }
  for(int i=0; i<2; i++){
    printf("Id: %d Name: %s %s %s Years: %d Salary: %lf Manager name: %s %s \n",
      company[i].id,company[i].fName,company[i].mName,company[i].lName,company[i].workYears,
      company[i].salary,company[i].manager->fName,company[i].manager->lName);
  }
}