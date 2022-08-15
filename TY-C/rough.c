#include<stdio.h>
int func();

int main()
{
    int num;
    num=func();

    printf("%d", num);
    
    return 0;
}
int func(void)
{
    return 10;
}