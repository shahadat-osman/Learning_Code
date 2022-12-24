#include <stdio.h>
int max(int ary[], int n)
{
    int max = ary[0];
    for (int i = 0; i < n; i++)
    {
        if (ary[i] > max)
            max = ary[i];
    }
    return max;
}
int min(int ary[], int n)
{
    int min = ary[0];
    for (int i = 0; i < n; i++)
    {
        if (ary[i] < min)
            min = ary[i];
    }
    return min;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    int maximum = max(ary, n);
    int minimum = min(ary, n);
    printf("Maximum = %d\nMinimum = %d\n", maximum, minimum);
    return 0;
}