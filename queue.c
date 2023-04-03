#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct queue{
    int size;
    int front;
    int curr;
    int* arr;
}queue;

void enqueue(struct queue* q,long value)
{
    q->curr++;
    q->arr[q->curr]=value;
}
void dequeue(struct queue* q)
{
    q->front++;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    struct  queue* q= malloc(sizeof(queue));
    q->size=10;
    q->front=0;
    q->curr=-1;
    q->arr=(int*)malloc(q->size * (sizeof(int)));

    int query;
    scanf("%d",&query);

    while(query>0)
    {
        int quer;
        long num;
        scanf("%d",&quer);
        switch(quer)
        {
            case 1:  scanf("%ld",&num);
                      enqueue(q,num);
                      break;
            case 2: dequeue(q);
                     break;
            case 3: printf("%d: %d",q->front,q->arr[q->front]);


        }
        query--;
    }






    return 0;
}
