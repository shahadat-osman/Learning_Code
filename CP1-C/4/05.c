#include<stdio.h>
int main()
{
    int n=0, n1=1;

    while(n<=10)
    {
        n=n+1;
        
        if(!(n%2==0))
        {
            printf("%d odd\n", n);
            continue;
        }
        printf("%d even\n",n);
        
    }
    return 0;
}
