#include <stdio.h>
int main()
{


    int x,y;

        printf("Enter 2 number between 0-99:\n");
        scanf("%d%d",&x,&y);
    if((x<0 ||x>99 ) || (y<0 ||y>99))
    {
        printf("YOU have entered out of range value:");
        return 0;
    }
 else
 {


int and_res = x&y;
int or_res = x|y;
int xor_res = x^y;
printf("and:%d\nor:%d\nxorr:%d\n",and_res,or_res,xor_res);

if(and_res>or_res)
{
    if(and_res>xor_res)
    {
        printf("And operator provide greater output: %d",and_res);
    }
    else
    {
        printf("XOR operator gives greater output:%d",xor_res);
    }
}
else
{
    if(or_res>xor_res)
    {
        printf("OR operator will give greater output:%d",or_res);
    }
    else
    {printf("XOR operator gives greater output:%d",xor_res);

    }
}}
}