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
    int j=9;
    while(n>0){
        if(n%arr[1][j]==0){ /*тази логика не е много правилна, не смята оптималния план */
            sum+=arr[0][j];
            n-=arr[1][j];
            fprintf(file2,"%d %d\n",arr[1][j],arr[0][j]);
            j=10;
        }
        j--;
    }
    fprintf(file2,"%d",sum);    
    fclose(file1);
    fclose(file2);
    file1=NULL;
    file2=NULL;
    return 0;
}