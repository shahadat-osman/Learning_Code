#include <stdio.h>
int main()
{
    int num1, num2, result;

    printf("Insert first Number: \n");
    scanf("%d", &num1);
    printf("Insert second number: \n");
    scanf("%d", &num2);
    
    result=num1+num2;
    printf("Sum = %d\n", result);

    result=num1*num2;
    printf("Product = %d\n", result);

    result=num1-num2;
    printf("Difference = %d\n", result);

    result=num1/num2;
    printf("Quotient = %d\n", result);

    result=num1%num2;
    printf("Remainder = %d\n", result);

    return 0;
}