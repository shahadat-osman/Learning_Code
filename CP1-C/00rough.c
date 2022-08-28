#include<stdio.h>
int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("Number is greater than 0.");
    }
    else if(num<0)
    {
        printf("Number is lower than 0.");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}