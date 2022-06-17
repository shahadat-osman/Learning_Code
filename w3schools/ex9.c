#include <stdio.h>
int  main()
{
    int x=0, y=6;
    x*=-3;

    printf("X=%d, Y=%d\n", x,y);

    if (x>0)
    {
        printf("X is Positive");
    }
    else if (x<0)
    {
        printf("X is Negative");
    }
    else
    {
        printf("X is 0");
    }

    return 0;
}
