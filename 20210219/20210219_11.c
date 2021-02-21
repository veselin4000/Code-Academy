#include <stdio.h>
struct pStruct{
    int a;
    struct pStruct *p;
};

int main(){
    struct pStruct st1;
    struct pStruct st2;
    st1.a=5;
    st1.p=&st2;
    st2.a=9;
    st2.p=&st1;
    printf("%d\n", st1.p->a);
    printf("%d\n", st2.p->a);
    return 0;
}