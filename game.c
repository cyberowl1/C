#include "stdio.h"

int main()
{
    int arr[2];
    int arr2[2];

    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    scanf("%d %d %d",&arr2[0],&arr2[1],&arr2[2]);

    int alice=0;
    int bob=0;

    for(int i =0; i<3;i++)
    {

        if(arr[i]<arr2[i])
        {

            bob++;

        }

        else if(arr[i]>arr2[i])
        {
            alice++;
        }


    }
    printf("%d %d",alice,bob);
}