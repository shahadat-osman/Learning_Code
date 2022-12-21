#include <stdio.h>
void swaap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After Swap: %d %d\n", a, b);
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("Numbers are: %d %d\n", num1, num2);

    swaap(num1, num2);

    return 0;
}