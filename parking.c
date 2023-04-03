#include <stdio.h>
#include <cs50.h>

int main()
{
    int  x= get_int("enter no of rows:");
    int y= get_int("enter no of column:");

    int arr[x][y];
    for(int i =0;i<x;i++)
    {
        for(int j =0;j<y;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int counter=0;
    for(int i =0;i<x;i++)
    {
        for(int j =0;j<y;j++)
        {
            if(arr[i][j]==1)
            {
                counter++;
            }
        }
        if(max<counter)
        {
            max=i;
            counter=0;
        }
    }
    printf("Row %d has maxiimum no. of 1's",max+1);
}