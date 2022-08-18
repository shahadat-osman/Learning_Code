#include<stdio.h>
int o_to_c(int O);

int main()
{
    int O ,ounces;
    int cups;

    printf("enter ounces: ");
    scanf("%d", &ounces);

    cups=o_to_c(ounces);
    printf("%d cups.", cups);

    return 0;
}
int o_to_c(int O)
{
    return O/8;
}