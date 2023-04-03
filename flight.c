#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node{
    int number;
    struct node * next;
}
node;

int main(){
    node *list = NULL;
    
    node *n = malloc(sizeof(node));
    if ( n == NULL){
        return 1;
    }
  n->number = 1;
  n->next = NULL;
  list = n;
  
  
   n = malloc(sizeof(node));
    if ( n == NULL){
        return 1;
    }
  n->number = 5;
  n->next = NULL;
  list->next = n;
  
  
  n = malloc(sizeof(node));
    if ( n == NULL){
        return 1;
    }
  n->number = 3;
  n->next = NULL;
  list->next->next = n;
  
   node *ptr = list->next;
    n = malloc(sizeof(node));
    if ( n == NULL){
        return 1;
    }
  n->number = 3;
  n->next = ptr;
  list->next = n;
  
  node *x = list->next;
  node *y = list->next->next->next;
  free(list->next->next);
  x->next = y;
  
  

  
 
 
  for(node  *temp = list ; temp != NULL; temp = temp->next){
      printf("%i\n", temp->number);
 
 
  }
}