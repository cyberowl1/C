#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     int size;
     scanf("%d",&size);

     char** strings= malloc(size*(sizeof(char*)));
     for(int i=0;i<size;i++)
     {
         char* strings2=malloc(10*sizeof(char));
         scanf("%s",strings2);
         strings[i]=strings2;
     }
  int query;
  scanf("%d",&query);
 char** queries = malloc(query *sizeof(char*) );
 for(int i=0;i<query;i++)
     {
         char* strings2=malloc(10*sizeof(char));
         scanf("%s",strings2);
         queries[i]=strings2;
     }
     int count=0;
while(count<query)
{
    int counter=0;
   for(int i =0;i<size;i++)
   {
       if(strcmp(queries[count],strings[i])==0)
       {
           counter++;
       }
   }
   printf("%d\n",counter);
   count++;
}

}