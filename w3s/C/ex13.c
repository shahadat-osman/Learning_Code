#include<stdio.h>
int main()
{
    int i;
    printf("Input Number: ");
    scanf("%i", &i);
    while (i<=20)
    {
        printf("%d Very Tired!\n", i);
        ++i;
    }

    return 0;
}