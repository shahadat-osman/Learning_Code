#include<stdio.h>
int main()
{
    int n1, n2, quotient, multiple;

    printf("Enter dividend:\n");
    scanf("%d", &n1);
    printf("Enter divisor:\n");
    scanf("%d", &n2);

    quotient = n1/n2;
    printf("Quotient is = %d\n", quotient);

    multiple = quotient*n2;
    printf("Remainder is = %d\n", n1-multiple);



   return 0;
}