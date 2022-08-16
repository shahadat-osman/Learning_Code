#include<stdio.h>
int o_to_c(int o);

int main()
{
    int o ,ounces;
    int cups;

    printf("enter ounces: ");
    scanf("%d", &ounces);

    cups=o_to_c(ounces);
    printf("%d cups.", cups);

    return 0;
}
int o_to_c(int o)
{
    return o/8;
}