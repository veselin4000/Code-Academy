
#include <stdio.h>
#include <string.h>
struct worker{
  int id;
  char fName[32];
  char mName[32];
  char lName[32];
  char pos[10];
  int workYears;
  double salary;
  struct worker *manager;
};

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