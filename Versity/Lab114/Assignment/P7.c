#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n, ans;
    scanf("%d", &n);

    ans = factorial(n);
    printf("The Factorial of N is = %d\n", ans);

    return 0;
}