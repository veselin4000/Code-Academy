/*Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct worker{
  int id;
  char fName[32];
  char mName[32];
  char lName[32];
  char pos[10];
  int workYears;
  double salary;
  struct worker *manager;
}worker;

void input(worker company[]){
for(int i=0; i<10; i++){
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

int main(){
  worker *company= (worker*)(malloc(10*sizeof(worker)));
  input(company);
    int n=0;
    for(int i=0;i<10;i++){
      printf("Enter manager's id for worker %s %s",company[i].fName, company[i].lName);
      scanf("%d",&n);
      for(int j=0; j<10; j++){
        if(n==company[j].id){
          company[i].manager=&company[j];
        }
      }
    }
  for(int i=0; i<10; i++){
    printf("Id: %d Name: %s %s %s Years: %d Salary: %lf Manager name: %s %s \n",
      company[i].id,company[i].fName,company[i].mName,company[i].lName,company[i].workYears,
      company[i].salary,company[i].manager->fName,company[i].manager->lName);
  }
}