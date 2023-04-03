#include <stdio.h>

void printFibonacci(int n){
int n3;
 int sum=0;
   do
   {

    static int n1=0,n2=1;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         if(n3%2==0)
         {
             sum=sum+n3;
         }
         printFibonacci(n-1);
    }
   }
   while(n3<4000000);

   printf("\nthe sum is :-%d",sum);
}

int main()
{
  int n= 400;

  printFibonacci(n);
}