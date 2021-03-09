/*Задача 20.Движението по дълга улица на “Експрес Такси” е организирано, така че
има спирка на всеки километър. “Експрес Такси” се движи по улицата от всяка спирка
1,2,3... или 10 километра без спиране. За всеки от десетте разстояния цените са
дадени в таблица, например:
1 12
2 21
3 31
4 40
5 49
6 58
7 69
8 79
9 90
10 101
Пътник иска да пътува n (1<=n<=100) километра. Какви разстояния на пътуване трябва
да избере, така че пътуването да му излезе най-евтино, и каква е цената на цялото
пътуване? Напишете програма, която да реши проблема.
Входни данни: В първия ред от входния файл INPUT3.TXT са записани 10 цели числа,
които са цените за пътуване, съответно на 1,2,3... ,10 километра, а във втория ред е
записано само числото n.
Изходни данни: Всеки ред без последния от изходния файл OUTPUT3.TXT трябва да
съдържа две числа - дължината на маршрута и цената на билета. Цената на цялото
пътуване трябва да се запише на последния ред от изходния файл.
Примерен вход
INPUT3.TXT
12 21 31 40 49 58 69 79 90 101
15
Примерен изход
OUTPUT3.TXT
3 31
6 58
6 58
147*/
#include <stdio.h>
int arr[2][10]={{12,21,31,40,49,58,69,79,90,101},{1,2,3,4,5,6,7,8,9,10}};
int main(){
  int n,sum=0;
  printf("How many kms? ");
  scanf("%d",&n);
  FILE *file1=NULL;
  FILE *file2=NULL;
  file1=fopen("INPUT3.txt","wt");
  if(file1==NULL){
    printf("Error opening INPUT3");
  }
  file2=fopen("OUTPUT3.txt","wt");
  if(file2==NULL){
    printf("Error opening OUTPUT3");
  }
  fseek(file1,0,SEEK_SET);
  for(int j=0; j<10; j++){
    fprintf(file1,"%d ",arr[0][j]);
  }
  fseek(file1,0,SEEK_END);
  fputc('\n',file1);
  fprintf(file1,"%d",n);
  fseek(file2,0,SEEK_SET);
  float cheap=11111,temp;int i,j,k;
  while(n>0){
    cheap=11111;
    for (i = 0,j=0; i < 10; i++,j++){
      temp=((float)arr[1][i])/arr[0][i];
      if (cheap>temp&&n>=arr[1][i]){
        cheap= temp;k=i;
      }
    }
    printf("%d, %d ",n, k);
    sum+=arr[0][k];
    n-=(k+1);
    fprintf(file2,"%d %d\n",arr[1][k],arr[0][k]);
  } 
  fprintf(file2,"%d\n",sum);   
  fclose(file1);
  fclose(file2);
  file1=NULL;
  file2=NULL;
  return 0;
}