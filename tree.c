#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
    
}node;
void print_tree(node*root);
int main ()
{
    node *tree = NULL;
    
    node *n = malloc(sizeof(node));
    if (n ==NULL)
    {
    return 1;
    } 
    n->number = 5;
    n->left = NULL;
    n->right = NULL;
    tree = n;
    
    n = malloc(sizeof(node));
    if (n == NULL)
   {
    free(tree);
    return 1;
   }
   n->number = 6;
   n->left = NULL;
   n->right = NULL;
   tree->left = n;
   
   n = malloc(sizeof(node));
    if (n == NULL)
   {
   free(tree->left);
    free(tree);
    return 1;
   }
   n->number = 8;
   n->left = NULL;
   n->right = NULL;
   tree->right = n;
   
   print_tree(tree);
   
}
   
   void print_tree(node*root)

{
 if (root == NULL
)
 {
 return;
 }
 print_tree(root->left);
 printf("%i\n", root->number);
 print_tree(root->right);

}
