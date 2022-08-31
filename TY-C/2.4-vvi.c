#include<stdio.h>
int main()
{
    int num, sum, prod, h=1;
    sum=0;
    prod=1;

    for(num=1; num<6; num++)
    {
        sum=sum+num;
        prod=prod*num;
    }
    printf("product and sum: %d %d\n", prod ,sum);
    
    return 0;
}