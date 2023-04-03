#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);

int** arr= (int**)malloc(n*sizeof(int*));

for(int i =0;i<n;i++)
{
    arr[i]= (int*)malloc(n*sizeof(int));
    arr[i]=0;
}
int lastAnswer=0,index;
int q;
scanf("%d",&q);
int k=0;
int idx;
int t,x,y;
while(q>0)
{

    scanf("%i %i %i", &t, &x, &y);

    if(t==1)
    {
        idx  = ((x^lastAnswer)%n);

           arr[idx][k]= y;
            k++;
    }
    else
    {
       idx = ((x^lastAnswer)%n);
           lastAnswer= arr[idx][y % sizeof(arr[idx])];
            printf("%i\n", lastAnswer);
    }
    q--;
}
}