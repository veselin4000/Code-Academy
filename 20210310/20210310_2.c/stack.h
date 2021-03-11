#define MAX 10
typedef struct stack {
  int items[MAX];
  int top;
}st;
void createEmptyStack(st *s);
int isfull(st *s);
int isempty(st *s);
void push(st *s, int newitem);
void pop(st *s);