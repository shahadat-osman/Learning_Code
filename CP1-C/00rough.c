#include<stdio.h>
int main()
{
    int num=0;

    while(num<10)
    {
        if(num==4)
        {
            break;
        }
        printf("%d hola!\n", num);
        num++;
    }

    return 0;
}