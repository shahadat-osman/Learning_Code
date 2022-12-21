#include<stdio.h>
int max(int a, int b, int c)
{
    int rslt;
    if(a>b && a>c)
        rslt=a;
    if(b>a && b>c)
        rslt=b;
    if(c>a && c>b)
        rslt=c;

    return rslt;
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    printf("Maximum Number is %d\n", max(x,y,z));

    return 0;
}