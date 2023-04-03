#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main()
{
    int count=0;
    int j=0;
    char *plain = (char *)malloc(512000 * sizeof(char));

    scanf("%s",plain);

    int n;
    scanf("%d",&n);
int counter = 0;


   for(int i=0; i<=n+1; i++)
  {
      if(j==n)
      {
          goto end;
      }
      if(plain[i]=='\0')
      {
          i = 0;
          j++;

      }
    if(plain[i] == 'a')
      {

       counter++;
       j++;

     }

   }
 end:
    printf("%d",counter);
}