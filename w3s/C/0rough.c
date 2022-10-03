//write a program to show letter grade of given marks
#include<stdio.h>
int main()
{
    int m;

    printf("Enter Marks:\n");
    scanf("%d", &m);

    if(m>=90 && m<=100)
    {
        printf("A grade");
    }
    if(m>=80 && m<=89)
    {
        printf("B grade");
    }
    else
    {
        printf("Failed.");
    }
    return 0;
}