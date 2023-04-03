#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyLinkedListNode{
    int data;
  struct  DoublyLinkedListNode* next;
    struct DoublyLinkedListNode* prev;
}DoublyLinkedListNode;

DoublyLinkedListNode* creatAnode(int data)
{
    DoublyLinkedListNode* Node = malloc(sizeof(DoublyLinkedListNode));

    Node->data=data;
    Node->next=NULL;
    Node->prev = NULL;
    return Node;
}
void PrintDoublyList(DoublyLinkedListNode* llist)
{
    DoublyLinkedListNode* temp = malloc(sizeof(DoublyLinkedListNode));
    temp= llist;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp= temp->next;
    }
}

int main()
{
    DoublyLinkedListNode* head = malloc(sizeof(DoublyLinkedListNode));

   DoublyLinkedListNode* n = creatAnode(5);
   head=n;
     DoublyLinkedListNode* a = creatAnode(7);
   DoublyLinkedListNode* b = creatAnode(9);

   head->next=a;
   a->prev=head;
   a->next=b;
   b->prev=a;



   PrintDoublyList(head);
free(head);
free(a);
free(b);

}
