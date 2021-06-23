#include <stdio.h>
#include<stdlib.h>
typedef struct point {
   int a;
   int b;
}point;

point* makepoint(int x, int y){
        point *p=(point*)malloc(sizeof(point));
        p->a=x;
        p->b=y;
        return p;
}


int main(int argc, char* argv[] ) {
        if(argc!=5){
                exit(2);
        }

        int data[50];
        for( int i=0;i<argc-1;i++){
                data[i]=atoi(argv[i+1]);
        }

         point* p1=makepoint(data[0],data[1]);
         point* p2=makepoint(data[2],data[3]);

        printf("%d %d\n",p1->a,p1->b);
        printf("%d %d\n",p2->a,p2->b);
        free(p1);
        free(p2);
        return 0;

}
