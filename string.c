#include "stdio.h"

int main()
{
    int n,p=0;
    scanf("%d", &n);
    char s[n];
    for(int i = 0; i<=n; i++)
    {
        scanf("%c", &s[i]);
    }

    for(int i = 0; i <=n ; i++)
    {


    if (s[i] == 'U')
{

    p++;
}
else if(s[i] =='D')
{
    p--;

}

}
    printf("%d", p);
}