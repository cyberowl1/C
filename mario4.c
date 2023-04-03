#include "stdio.h"

int main()
{
int size;

scanf("%d",&size);

for(int i=0;i<size;i++)
{
    for(int j=size; j>i;j--)
    {
        printf(" ");
    }
     for(int k =0;k<i;k++)
    {
        printf("#");
    }
    printf("\n");
}

}