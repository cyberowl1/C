#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size;

    scanf("%d",&size);
    int arr[size-1][size-1];
    int x,y;

    scanf("%d%d",&x,&y);

    int counter=0;
    for(int i =0;i<size;i++)
    {
        for(int j =0;j<size;j++)
        {
            if(abs(i-j)==abs(x-y))
            {
                counter++;
            }
        }
    }

    for(int i =0;i<x+y-2;i++)
    {
        for(int j =x+y-2;j>0;j--)
        {
            counter++;
            break;
        }
    }
    printf("%d",2*(size)+counter-3);
}