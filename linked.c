#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(){
    
    node *list = NULL;
    
    node *n = malloc(sizeof(node));
    if(n ==NULL)
    {
        return 2;
    }
    n->number  = 3;
    n->next = NULL;
    list = n;
    
    n = malloc(sizeof(node));
    if(n ==NULL)
    {
        return 1;
    }
    n->number  = 5;
    n->next = NULL;
    list->next = n;
    
    n = malloc(sizeof(node));
    if ( n == NULL){
        free(list->next);
        free(list);
    }
    n->number = 6;
    n->next = NULL;
    list->next->next = n;
    
    n = malloc(sizeof(node));
    if (n == NULL){
        free(list->next->next);
        free(list->next);
        free(list);
    }
    n->number = 8;
    n->next = NULL;
    list->next->next->next = n;
    
    //adding element after 5
    
    n = malloc(sizeof(node));
    if (n == NULL){
        return 5;
    }
    
    n->number = 9;
    n->next = list->next->next;
    list->next->next = n;
    
    while(list != NULL){
        node *x = list->next;
        free(list);
        list = x;
    }
    
    for (node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%i\n",tmp->number);
    }
}