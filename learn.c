#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct stack{
        int size;
        int top;
        int * arr;
    } stack;
int main(){
    struct stack *s = (struct stack *) malloc(sizeof(int));
     s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    printf("stack created\n");
    
}
