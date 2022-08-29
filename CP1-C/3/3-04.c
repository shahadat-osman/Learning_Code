#include<stdio.h>
int main()
{
    int n;

    printf("Input a number: ");
    scanf("%d", &n);

    if(n<0)
    {
        printf("The number is negative");
    }
    else if (n>0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is Zero");
    }
    return 0;
}