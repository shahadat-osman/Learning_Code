#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number is even.\n");
    }
    if(num%2==1)
    {
        printf("The number is odd.\n");
    }
    return 0;
}