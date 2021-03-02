#include <stdio.h>
#include <stdlib.h>
int main(){
  int *id, *age;
  char **fName, **lName;
  int i, x = 1;int recordMem=4;
  int j;

  id = (int *)malloc(recordMem*sizeof(int));
  if(NULL == id){
    printf("Allocation memory error!\n");
    exit(3);
  }
  fName = (char **)malloc(recordMem*sizeof(char *));
  if(NULL == fName){
    printf("Allocation memory error!\n");
    exit(1);
  }
  lName = (char **)malloc(recordMem*sizeof(char *));
  if(NULL == lName){
    printf("Allocation memory error!\n");
    exit(2);
  }
  age = (int *)malloc(recordMem*sizeof(int));
  if(NULL == age){
    printf("Allocation memory error!\n");
    exit(4);
  }
  
  for(i=0;x==1;i++){
    printf("Enter id: ");
    fflush(stdin);
    scanf("%d", &(id[i]));

    printf("Enter first name: ");
    fName[i] = (char *)malloc(i*sizeof(char));
    if(NULL == fName[i]){
      printf("Allocation memory error!\n");
      exit(5);
    }
    fflush(stdin);
    gets(fName[i]);

    printf("Enter the last name: ");
    lName[i] = (char *)malloc(i*sizeof(char));
    if(NULL == lName[i]){
        printf("Allocation memory error!\n");
        exit(6);
    }
    fflush(stdin);
    gets(lName[i]);

    printf("Enter the age:");
    fflush(stdin);
    scanf("%d", &age[i]);

    printf("Press 1 to enter more records or 0 to stop\n");
    fflush(stdin);
    scanf("%d", &x);

    if(x == 0){
      printf("Users: \n");
      for(j = 0; j <= i; j++){
        printf("\nId: %d\n", id[j]);
        printf("First name: %s\n", fName[j]);
        printf("Last name: %s\n", lName[j]);
        printf("Age: %d\n", age[j]);
        if (i==recordMem){
          recordMem*=2;
           id = (int *)realloc(id, recordMem*sizeof(int));
          if(NULL == id){
            printf("Allocation memory error!\n");
            exit(7);
          }
           fName = (char **)realloc(fName,recordMem*sizeof(char *));
          if(NULL == fName){
            printf("Allocation memory error!\n");
            exit(1);
          }
          lName = (char **)realloc(lName,recordMem*sizeof(char *));
          if(NULL == lName){
            printf("Allocation memory error!\n");
            exit(2);
          }
          age = (int *)realloc(age, recordMem*sizeof(int));
          if(NULL == age){
            printf("Allocation memory error!\n");
            exit(8);
          }
        }
      }
    }
  }
   for (i; i >=0 ; i--){
    free(fName[i]);
  }
  for (i; i >=0 ; i--){
    free(lName[i]);
  }
  free(id);
  free(fName);
  free(lName);
  free(age);

  return 0;
}