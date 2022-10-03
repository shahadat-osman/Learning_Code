//write a program to show grade letter according to given marks.
#include<stdio.h>
int main()
{
    int marks;

    printf("Enter Marks:\n");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100)
    {
        printf("Obtained A grade.");
    }
    else if(marks>=80 && marks<=89)
    {
        printf("Obtained B grade.");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("Obtained C grade.");
    }
    else if(marks>=60 && marks<=69)
    {
        printf("Obtained D grade.");
    }
    else if(marks<=59)
    {
        printf("Obtained F grade.");
    }
    else
    {
        printf("Wrong Input.");
    }
    return 0;
}
