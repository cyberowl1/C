#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int num;
    double x;
    char stringss[100];

    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    scanf("%d",&num);
    scanf("%lf",&x);
    printf("string input");
    fgets(stringss, sizeof stringss, stdin);

    // Print the sum of both integer variables on a new line.
    printf("%d\n",num+(int)x);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",x+x);
    // Concatenate and print the String variables on a new line
    printf("%s%s",s,stringss);
    // printf("%s",str);
    // The '' variable above should be printed first.

    return 0;

}