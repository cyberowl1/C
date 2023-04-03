#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int data;
    struct stack* next;
}stack;

int isEmpty(struct stack* st)
{
    if(st==NULL)
    {
        return 1;
    }
return 0;
}

int isFull(struct stack* st)
{
    struct stack* n= malloc(sizeof(stack));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct stack* push(struct stack* st,int data)
{
    if(!isFull(st))
    {
        struct stack * n= malloc(sizeof(stack));
        n->data = data;
        n->next=st;
        st=n;
    }
    return st;
}
void stackTraversal(struct stack* st)
{
    while(st!=NULL)
    {
        printf("%d\n",st->data);
        st=st->next;
    }
}
void pop(struct stack** st)
{
    if(isEmpty(*st))
    {
        printf("Stack UNderflow\n");
    }
    else
    {
        struct stack* n= *st;
        (*st) = (*st)->next;
        free(n);
    }
}

int peek(struct stack* st,int pos)
{
    struct stack* ptr = st;
    for(int i=0; (i<pos-1 && ptr!=NULL); i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        printf("%d",ptr->data);
    }
    return 0;
}
int main()
{
    stack * st = malloc(sizeof(stack));
    st=NULL;
    printf("%d\n",isEmpty(st));
    st=push(st,34);
    st=push(st,32);
    st=push(st,31);
    // pop(&st);
    // stackTraversal(st);
    peek(st,2);
     peek(st,3);

     printf("%d\n",isEmpty(st));

}