#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char* s;
    s = malloc(sizeof(char));
 fgets(s,15,stdin);

 int i=0;
 int counter=0;
 while(s[i]!='\n')
 {

     for(int j=i+1;j<strlen(s);j++)
     {
         if(s[j]==s[i])
         {
             j++;
             counter++;
         }
         else
         {
             break;
         }
     }
     if(counter>1)
     {
        for(int k =0;k<strlen(s)-counter;k++)
     {
         s[k]=s[k+counter];
     }
     }

      counter=1;
      i++;
 }

    printf("%s",s);
}