#include<stdio.h>
int r=0;
int recurse(int a)
{

if(a>0)
{
r=(r*10 )+ (a%10);
recurse(a/10);
}
else
return r;
return r;
}
int main()
{
    printf("output:%d",recurse(49762));
    return 0;
}