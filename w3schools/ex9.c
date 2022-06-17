#include <stdio.h>
int  main()
{
    int x=2, y=6;

    printf("X=%d, Y=%d\n", x,y);

    if (x>y)
    {
        printf("X is greater than Y");
    }
    else if (x==y)
    {
        printf("X is equal to Y");
    }
    else
    {
        printf("Y is greater than X");
    }

    return 0;
}
