//write a program to find relationship between two integer
#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Input two numbers:\n");
    scanf("%d\n%d", &num1, &num2);

    if(num1==num2)
    {
        printf("%d==%d\n", num1, num2);
    }
    if(num1<num2)
    {
        printf("%d<%d\n", num1, num2);
    }
    if(num1>num2)
    {
        printf("%d>%d\n", num1, num2);
    }
    if(num1<=num2)
    {
        printf("%d<=%d\n", num1, num2);
    }
    if(num1>=num2)
    {
        printf("%d>=%d\n", num1, num2);
    }
    if(num1!=num2)
    {
        printf("%d!=%d\n", num1, num2);
    }
}