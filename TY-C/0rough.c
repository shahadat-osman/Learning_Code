#include<stdio.h>
int main()
{
    int i,j;

    printf("Enter the number to be tested:\n");
    scanf("%d", &j);

    for(i=1; i<=j; i++)
    {
        if((j%i)==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}