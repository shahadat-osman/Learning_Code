//varriable check: if same varriabal exist then first value will be shown.
#include <stdio.h>
int main()
{
    int x, y;
    
    x=1;
    y=x;
    x=2;

    printf("%d", y);

    return 0;
}
