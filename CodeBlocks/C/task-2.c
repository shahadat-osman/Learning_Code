#include <stdio.h>
int main()
{
    int n1, n2, n3;
    double sum, avg;

    printf("Insert first number: \n");
    scanf("%d", &n1);

    printf("Insert second number: \n");
    scanf("%d", &n2);

    printf("Insert third number: \n");
    scanf("%d", &n3);

    sum=n1+n2+n3;
    avg=sum/3;
    printf("The average is: %0.1lf", avg);
    
    return 0;
}