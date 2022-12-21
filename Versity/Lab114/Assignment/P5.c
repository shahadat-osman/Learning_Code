#include <stdio.h>
int swaap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("Numbers are: %d %d\n", num1, num2);

    swaap(&num1, &num2);
    printf("After Swap: %d %d\n", num1, num2);

    return 0;
}