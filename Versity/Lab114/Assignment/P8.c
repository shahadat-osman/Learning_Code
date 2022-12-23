#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, ans;

    printf("Enter Number: ");
    scanf("%d", &n);

    ans= fibonacci(n);
    printf("Output = %d\n", ans);

    return 0;
}