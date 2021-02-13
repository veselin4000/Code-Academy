#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int id[100], age[100];
  char **fName, **lName;
  char str[32];
  int i, x = 1,temp,a;
  int j;

  fName = (char **)malloc(sizeof(char *));
  if(NULL == fName){
    printf("Allocation memory error!\n");
    exit(1);
  }

  lName = (char **)malloc(sizeof(char *));
  if(NULL == lName){
    printf("Allocation memory error!\n");
    exit(2);
  }

  for(i=0;x==1;i++){
    printf("Enter id: ");
    fflush(stdin);
    scanf("%d", &id[i]);

    printf("Enter first name: ");
    fName[i] = (char *)malloc(14);
    if(NULL == fName[i]){
      printf("Allocation memory error!\n");
      exit(3);
    }
    fflush(stdin);
    gets(fName[i]);

    printf("Enter the last name: ");
    lName[i] = (char *)malloc(14);
    if(NULL == lName[i]){
        printf("Allocation memory error!\n");
        exit(4);
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
      for(j = 0; j <= i; j++){
        for(a = j + 1; a <= i; a++){
          if(strcmp(fName[j], fName[a]) >0){
            strcpy(str, fName[j]);
            strcpy(fName[j], fName[a]);
            strcpy(fName[a], str);
            strcpy(str, lName[j]);
            strcpy(lName[j], lName[x]);
            strcpy(lName[a], str);
            temp = id[j];
            id[j] = id[a];
            id[a] = temp;
            temp = age[j];
            age[j] = age[a];
            age[a] = temp;
          }
        }
      }
      printf("Users: \n");
      for(j = 0; j <= i; j++){
        printf("Id: %d\n", id[j]);
        printf("First name: %s\n", fName[j]);
        printf("Last name: %s\n", lName[j]);
        printf("Age: %d\n", age[j]);
      }
    }
  }
  free(fName);
  free(lName);
  for (i; i >=0 ; i--){
    free(fName[i]);
  }
  for (i; i >=0 ; i--){
    free(lName[i]);
  }
  return 0;
}