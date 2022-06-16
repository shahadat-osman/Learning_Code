//summation, subtraction, multiplication, division
#include <stdio.h>
int main()
{
    double n1, n2, sum, sub, mul, div, mod;
    char a='+', b='-', c='*', d='/', e='%';

    printf("Enter a number: \n");
    scanf("%lf", &n1);

    printf("Enter another number: \n");
    scanf("%lf", &n2);

    printf("Two numbers are: %0.2lf & %0.2lf \n", n1, n2);

    sum= n1+n2;
    sub= n1-n2;
    mul= n1*n2;
    div= n1/n2;

    printf("%0.2lf %c %0.2lf = %0.2lf \n", n1, a, n2, sum);
    printf("%0.2lf %c %0.2lf = %0.2lf \n", n1, b, n2, sub);
    printf("%0.2lf %c %0.2lf = %0.2lf \n", n1, c, n2, mul);
    printf("%0.2lf %c %0.2lf = %0.2lf \n", n1, d, n2, div);
    printf("%0.2lf %c %0.2lf = %0.2lf \n", n1, e, n2, mod);
    
    return 0;
}
