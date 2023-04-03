#include "stdio.h"

void swap(int arr[], int i, int j)
{
    int temp;
     temp= arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}
int findMin(int arr[], int k,int size)
{
    int min =0;
    for(int i=k+1; i<size;i++)
    {
        if(arr[i]<arr[i+1])
        {
            min = i;
        }
    }
    return min;
}

int main() 
{
int size;
scanf("%d",&size);


int arr1[size];

for (int i =0;i<size; i++)
{
    scanf("%d",&arr1[i]);
}
int swapCounter=0;
for(int k =0;k<size;k++)
{
 if(arr1[k]!=k+1)
 {
     swap(arr1,k,findMin(arr1,k,size));
//    for (int i =0;i<size; i++)
// {
//     printf("%d",arr1[i]);
// }
// printf("\n");
     swapCounter++;
 }

 
}
printf("%d",swapCounter);
return 0;
}