#include<stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);

    if(n2==0)
    {
        printf("Cannot divide by zero.\n");
    }
    else
    {
        printf("Answer is %d", n1/n2);
    }

    return 0;
}