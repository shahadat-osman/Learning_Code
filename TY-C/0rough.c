#include<stdio.h>
int main()
{
    int i;

    printf("Enter a number:\n");
    scanf("%d", &i);

    if(i%2==0)
    {
        printf("This is not prime number.");
    }
    else if(i%2==1)
    {
        printf("This is prime number.");
    }
    return 0;
}