#include<stdio.h>
int main()
{
    float i, sum=0, n, k, j, z, w;
    scanf("%f", &n);
    printf("1");
    for(i=2; i<=n; i++)
    {
        printf("+");
        k=i*i;
        j=i*i*i;
        w=k;
        for(z=1; z<i; z++)
        {
            w*=k;
        }
        
        printf("%.2f", ((j*j)+i/w));
    }
}