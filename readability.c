#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main (){
 int alpha=0,words=0,sentence=0;
 float s,l,index;
    string text = get_string("text:");
   long len = strlen(text);
    printf("%s\n",text);
    printf("%li\n",len);
  
   for(int i = 0; i<=len; i++){
    if (isalpha(text[i])){
     alpha++;
    }
    else if (text[i]==' '){
     words++;
    }
    else
    {
     sentence++;
    }
   }
   
   printf("alphabets: %i\n",alpha);
   printf("words:%i\n", words + 1);
   printf("sentences: %i\n", sentence);
   
   l = (alpha/words) * 100;
   s = (sentence/words) * 100;
   
   index=0.0588 * l - 0.296 * s - 15.8;
   
   printf("index : %f", index);
   
}
