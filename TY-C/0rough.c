#include<stdio.h>
int main()
{
    int num, sum, prod, h=1;
    sum=0;
    prod=1;

    for(num=10; num>6; num--)
    {
        sum=sum+num;
        prod=prod*num;
    }
    printf("product and sum: %d %d\n", prod ,sum);

    h=prod+h;
    printf("%d", h);
    
    return 0;
}