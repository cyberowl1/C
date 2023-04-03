#include <stdio.h>

int fib(int n)
{
    int f;
    if (n<2)
    {
        f=1;
    }
    else
    {
        f= fib(n-1)+fib(n-2);
    }
    return f;
}
int main()
{
    int n;
    scanf("%d",&n);

    int result = fib(n);
    printf("%d",result);
}