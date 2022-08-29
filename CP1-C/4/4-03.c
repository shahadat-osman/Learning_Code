#include<stdio.h>
int main()
{
    int n =1, n1;

    while (n<=100)
    {
        printf("%d\n", n);
        n++;
        if(n>10)
        {
            break;
        }
    }
    while (n1<=100)
    {
        if(n1>10)
        {
            break;
        }
        printf(".%d\n", n1);
        n1++;
    }
    
    return 0;
}