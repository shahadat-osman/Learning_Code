//undefined problem. didn't get it.
#include<stdio.h>
int main()
{
    int n, i, is_prime, j;

    printf("Enter the number to test:\n");
    scanf("%d", &n);

    //now test for factors
    is_prime=1;
    for(i=2; i<=n/2; i++)
    {
        if((n%i)==0)
        is_prime=0;
        
        if(is_prime==1)
        {
            printf("The number is prime.\n");
            
        }
        else
        {
            printf("The number is not prime.\n");
            
        }
    }

    return 0;
}