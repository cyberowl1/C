#include<stdio.h>
int sum=0,rem;
int revNumFunction(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revNumFunction(num/10);
   }
   else
      return sum;
return sum;
}
int main(){
   int num,revNum;
   printf("enter number:\n");
   scanf("%d",&num);
   // revNum=revNumFunction(num);
   printf("the number after reverse :%d",revNumFunction(num));
   return 0;
}
