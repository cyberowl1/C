#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main (){
  
    int *list = malloc( 3 * sizeof(int));
    if( list == NULL){
        return 1;
    }
     list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 5;
    
    int *temp = malloc( 4 * sizeof(int));
    if ( temp == NULL ){
        free(list);
        return 1;
    }
    
    for(int i = 0; i <= 4; i++){
        temp[i] = list[i];
    }
    temp[4] = 5;
        
        for(int i = 0; i <= 4; i++){
        printf("%i\n", temp[i]);
        
    }
    
    
   


}