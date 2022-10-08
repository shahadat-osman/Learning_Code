#include<stdio.h>
int get_sqr();

int main()
{
    int sqr;
    sqr=get_sqr();

    printf("Square: %d\n", sqr);

    return 0;
}
int get_sqr()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);
    return num*num;
}