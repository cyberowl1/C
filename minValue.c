#include <stdio.h>
#include <stdlib.h>

int minValue(int arr[],int n)
{
    int leftsum=0;
    for(int i=0;i<n/2;i++)
    {
        leftsum=leftsum+arr[i];

    }
     int rightsum=0;
    for(int i=n/2;i<n;i++)
    {
       rightsum=rightsum+arr[i];

    }

    return abs(leftsum-rightsum);
}
int main()
{
    int size;
    scanf("%d",&size);
     int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   int res= minValue(arr,size);
   printf("You need to add : %d",res);

}