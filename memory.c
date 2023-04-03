#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>



int main()
{
    string s = get_string("string:-\n");
    int n = strlen(s);
    
    printf("%s:\n ", s);
    printf("%p: \n", s);
    
// address of each char
for (int i = 0; i <=n; i++){
    printf("%p: \n", &s[i]);
    
if (islower(s[i]) == 0){
    printf("%c: CAPITAL", s[i]);}
else{
    printf("%c: small", s[i]);
    
}

}



}