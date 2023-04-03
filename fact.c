#include <stdio.h>

int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}

int main()
{
    int num=89;
    printf("%c and %x",num,num);
    // scanf("%d",&num);

    // int res= fact(num);
    // printf("%d",res);
}