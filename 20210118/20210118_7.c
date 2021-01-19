int main(){
  int nA = 1;
  int nB = (nA == 1 ? 2 : 0);
  printf("A value is %d\n", nA);
  printf("B value is %d\n",nB);
  printf("Input new value for nA: ");
  scanf("%d",&nA);
  printf("New nA value: %d\n\n",nA);

  int a = 0;
  int b = 0;
  printf("Input a: \n");
  scanf("%d",&a);
  printf("Input b: \n");
  scanf("%d",&b);
  
  a>b ? printf("a is bigger than b") : printf("b is bigger than a");
  return 0;
}