#include<stdio.h>
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int ans=sum(n);
    printf("Sum = %d\n", ans);

    return 0;
}