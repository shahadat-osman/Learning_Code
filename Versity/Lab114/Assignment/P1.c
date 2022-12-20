#include<stdio.h>
float sum(int ary[], int n)
{
    float sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=ary[i];
    }
    return sum;
}
float avg(int ary[], int n)
{
    float avg=sum(ary, n)/n;
    return avg;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int ary[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary[i]);
    }
    printf("Sum = %.2f\nAverage = %.2f\n", sum(ary, n), avg(ary, n));

    return 0;
}
