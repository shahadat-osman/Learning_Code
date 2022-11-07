#include<stdio.h>

int powerF(int x, int y)
{
    int i, p=1;
    for(i=1; i<=y; i++)
    {
        p *=x;
    }
    return p;
}
int main()
{
    int x, y, power;
    scanf("%d %d", &x, &y);
    power=powerF(x,y);
    printf("%d\n", power);
}