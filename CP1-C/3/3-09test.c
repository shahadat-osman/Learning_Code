#include<stdio.h>
int main()
{
    int a=3, b=11, quotient, remainder, multiply, mod;
    quotient=b/a;
    multiply=quotient*a;
    remainder=b-multiply;
    mod=b%a;
    printf("Ans is %d\nMod is %d", remainder, mod);





    return 0;
}