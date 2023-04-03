#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct pair
{
    int value;
    int key;
}pair;

void display(struct pair hashtables[] , int size);
void search(struct pair hashtables[] , int value);


int main(){
    int size = get_int("size:");

   struct pair hashtables[size];

    for (int i = 0; i <= size; i++)
    {
        int x = get_int("elements:");
        hashtables[x%].value = x;
        hashtables[x].key = x;
    }
    printf("\n");
    display(hashtables, size);
    int b = get_int("search:");
    search(hashtables, b);

}

void display(struct pair hashtables[], int size)
{
    printf("value \t key\n");
    for (int i = 1; i <= size; i++)
    {
        printf("%i \t %i", hashtables[i].value, hashtables[i].key);
        printf("\n");
    }

}
void search (struct pair hashtables[],int value)
{
    printf("%i \t %i",hashtables[value].value, hashtables[value].key);
}