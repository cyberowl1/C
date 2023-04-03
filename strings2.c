#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findMin(int arr[],int count)
{
   int min=0;
    for(int i =0;i<count;i++)
    {
        if(arr[i]<arr[min])
        {
            min =i;
        }

    }
    arr[min]=1000;
    return min;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    scanf("%d",&test);

    while(test>0)
    {
        int size1;
        int k;
        scanf("%d%d",&size1,&k);
        char arr[size1][20];
        int arr2[size1];
        for(int i=0;i<size1;i++)
        {
             scanf("%s",arr[i]);
                 scanf("%d",&arr2[i]);
    }
       for(int i=0;i<k;i++)
        {
           printf("%s\t",arr[findMin(arr2,size1)]);
        }
        printf("\n");
    test--;
    }
    return 0;
}