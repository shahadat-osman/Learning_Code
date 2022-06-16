//summation, subtracion, multiplication, division
#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter a number: \n");
    scanf("%d", &n1);

    printf("Enter another number: \n");
    scanf("%d", &n2);

    printf("Entered Numbers are: %d & %d\n", n1, n2);

    printf("Addition of         %d+%d= %d \n", n1, n2, n1+n2);
    printf("Substraction of     %d-%d= %d \n", n1, n2, n1-n2);
    printf("Multiplication of   %d*%d= %d \n", n1, n2, n1*n2);
    printf("Division of         %d/%d= %d \n", n1, n2, n1/n2);
    printf("Modulas of          %d(%)%d= %d \n", n1, n2, n1%n2);

    return 0;
}