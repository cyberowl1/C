#include "stdio.h"

void swap(int arr[], int i, int j)
{
    int temp;
     temp= arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}

int main()
{
    int test;
    int size;
    scanf("%d",&test);
    
    int i =0;
     int swapCounter = 0;
     
     while(i<test)
     {
    scanf("%d",&size);
    
     int arr[size];
     for (int j =0; j<size;j++)
    {
        scanf("%d",&arr[j]);
    }
    int swapCounter = 0;
    
    
    
    for(int k = size-1; k >=0; k--)
    {
        if (arr[k] != k+1)
        {
            if((k-1>=0 )&& arr[k-1] == k+1)
            {
                swapCounter++;
                swap(arr, k,k-1);
            }
            else if ((k-2>=0) && arr[k-2] == k+1)
            {
                swapCounter+=2;
                swap(arr,k-2,k-1);
                swap(arr,k-1,k);
            }
        
        
            else 
            {
            printf("Too chaotic\n");
               return 0;
            }
         
        }
      
    }
      i++;
    printf("%d\n",swapCounter);
    }
    
    
}
