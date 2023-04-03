#include <stdio.h>
#include <string.h>


bool find(char str[][],Char *str)
{
    for()
}

int main()
{
    char str[6][10];
    char dislik[6][10];
    int clients;
    scanf("%d",&clients);
   int i=0;
    while(i<clients)
    {
        int like;
        scanf("%d",&like);

        for(int j =0;j<like;j++)
        {
            scanf("%s",str[j]);
        }
        int dislike;
        scanf("%d",&dislike);
        for(int k=0;k<dislike;k++)
        {
            scanf("%s",dislik[k]);
        }

i++;
    }
    // if(strcmp("cheese",str[0])==0)
    // {
    //     str[0]='NULL';
    // }
    // if(strlen(str[0])==0)
    // {
    //     printf("true");
    // }
    printf("%lu",sizeof(str));
    // printf("%d\n",strcmp("cheese",str[1]));
    // printf("%d\n",strcmp("cheese",str[0]));


}