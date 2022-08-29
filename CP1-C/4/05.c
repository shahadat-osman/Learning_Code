#include<stdio.h>
int main()
{
    int n=0, n1=1;

    while(n<=10)
    {
        n=n+1;
        
        if(!(n%2==0))
        {
            continue;
        }
        printf("%d-%d\n",n, n1);
        n1++;
    }
    return 0;
}