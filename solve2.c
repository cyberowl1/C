#include "stdio.h"

int main()
{
    int size;
    int j =0;
    int temp;
    int rotation;

    scanf("%d",&size);
    scanf("%d", &rotation);
    int arr[size-1];

    for(int i=0; i<size; i++)
    {
        printf("enter array value %d",i);
        scanf("%d", &arr[i]);
    }

       while(j<rotation)
       {
           printf("rotating for frst tym");
           temp = arr[size-1];
        arr[size-1] = arr[0];

        for(int k= 0;k<size-1;k++)
        {
            arr[k] = arr[k+1];

        }
        arr[size-2] = temp;

j++;
}
    for(int m =0; m<size; m++)
    {
        printf("%d", arr[m]);
    }
}