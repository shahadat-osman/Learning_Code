//error scanf function 
#include <stdio.h>
int main()
{
    int a, b, sum;

    scanf("%d", &a);
    scanf("%d", b);             //& is missing befor b

    sum=a+b;

    printf("Sum is %d", sum);

    return 0;
}
