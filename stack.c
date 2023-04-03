#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct stack{
    int size;
    int top;
    int * arr;

}stack;
int isEmpty(struct stack * ptr){
    if (ptr->top == -1){
        return 1;

    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1){
        return 1;

    }
    else{
        return 0;
    }
}

void push( struct stack* ptr, int value){
    if (isFull (ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(struct stack * ptr){
if(isEmpty(ptr)){
    printf("stack is empty");
}
else{
    // int val = ptr->arr[ptr->top];
    ptr->top--;
    // printf("popped %d", val);
}
}

int findMax(struct stack* ptr)
{
    int max=0;
    for(int i=0;i<ptr->size;i++)
    {
        if(ptr->arr[i]>max)
        {
            max=ptr->arr[i];
        }
    }
    return max;
}
int main()
{
   struct stack *s = (struct stack *) malloc(sizeof(struct stack));
   s->size = 10;
   s->top = -1;
   s->arr = (int *)malloc(s->size * sizeof(int));

int opnum;
scanf("%d",&opnum);
while(opnum>0)
{
   int op;
   scanf("%d",&op);
   int num;

   switch(op){

       case 1: scanf("%d",&num);
              push(s,num);
              break;
       case 2:pop(s);
              break;
       case 3: printf("%d\n",findMax(s));

   }
opnum--;
}
    // printf("%d\n",isEmpty(s));
    //  printf("%d\n",isFull(s));
    //  push(s , 23);
    //  push(s , 24);
    //  push(s , 26);

    //   printf("%d\n",isEmpty(s));
    //  printf("%d\n",isFull(s));
    //  pop(s);
}

