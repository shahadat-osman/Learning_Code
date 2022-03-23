//keeping float value in int varriable
#include <stdio.h>
int main()
{
    int n;
    double x;

    x=10.5;
    n=(int)x;

    printf("Value of x=%lf & n=%d", x,n);
    return 0;
}
