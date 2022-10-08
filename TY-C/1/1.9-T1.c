#include<stdio.h>
void sum(int x, int y);
void nl();

int main()
{
    sum(1+1, 5*4);
    nl();
    sum(32, 45);
    nl();
    sum(90, 120);

    return 0;
}
void sum(int x, int y)
{
    printf("%d", x+y);
}
void nl()
{
    printf("\n");
}