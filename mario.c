#include <stdio.h>
#include <cs50.h>

int main()
{
//variable declearation
    int height, i, j, k, m = 0, l, f;
    do 
    {
// get input from user for height.
       height = get_int("height: ");
    }    
//checking value of height.
    while (height < 0);
    printf("%i\n", height);
    
// loop for creating mario
    for (i = height ; i >= 0; i--)
    {
        for (j = 0 ; j < i; j++)
        {
            printf(" ");

        }
        for (k = 0; k <= m ; k++)
        {
            printf("*");
        }
        for (l = 0; l < 2 ; l++)
        {
            printf("  ");
        }
        for(f = 0; f <= m; f ++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
}