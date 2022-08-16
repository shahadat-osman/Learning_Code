#include<stdio.h>
double o_to_c();

    double ounce;

int main()
{
    printf("In Cup: %.2lf", o_to_c());

    return 0;
}
double o_to_c()
{
    printf("enter weight in ounce(s):");
    scanf("%lf", &ounce);

    return ounce/8;
}