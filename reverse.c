#include "stdio.h"
int reverse1=0;
 int number;
void reverse(int num)
{
    if(num!=0)
  {
     number=num%10;

     printf("%d",number);
     reverse(num/10);



  }


}
int main()
{
    // int size;
    // scanf("%d",&size);
    // int arr[size-1];
    // for(int i =0;i<size;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // int k=0;
    // int j=size-1;
    // while(k<j)
    // {
    //     int temp;
    //     temp=arr[k];
    //     arr[k]=arr[j];
    //     arr[j]=temp;
    //     k++;
    //     j--;
    // }
    // for(int m =0;m<size;m++)
    // {
    //     printf("%d",arr[m]);
    // }
    int num;
    scanf("%d",&num);
   reverse(num);
}