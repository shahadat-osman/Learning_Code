#include <stdio.h>
int main()
{
    int Celsius;
    printf("Calsius Value: ");
    scanf("%d",&Celsius);
    printf("The temperature in Fahrenheit is %d\n", Celsius* 9/5 + 32);

    return 0;
}