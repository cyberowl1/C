#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size;

    scanf("%d",&size);

    int arr[size-1][size-1];

    for(int i =0; i<=size-1;i++)
    {
        for (int j =0; j<=size-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int ld= arr[0][0] +arr[1][1] +arr[2][2];
    int rd= arr[0][2] +arr[1][1] +arr[2][0];

    int diffr = abs(ld-rd);

    printf("%d",diffr);

}