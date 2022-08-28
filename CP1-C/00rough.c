#include<stdio.h>
int main()
{
    int num=0;

    /* while(num<10)
    {
        printf("%d\n", num);
        num++;
    } */
    /* while(num<5)
    {
        if(num==2)
        {
            break;
        }
        printf("%d Hola!\n",num);
        num++;
    } */
    while (num<8)
    {
        if(num==4)
        {
            num++;
            printf("Hello World %d\n", num);
            continue;
        }
        printf("Doom %d\n", num);
        num++;
    }

    return 0;
}