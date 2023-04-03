#include "stdio.h"
#include "string.h"

int main()
{
    int test;
    scanf("%d",&test);
    
    int k =0;
    while(k<test)
    
    {
        char str[1000];
    scanf("%s",&str);
    

    int count = 0;
    

    for(int i = 0; i<strlen(str);i++)
    {
        if(str[i]==str[i+1])
        {

            count++;
        }
        else
        {

        }
    }
k++;
    printf("%d\n",count);
}

}