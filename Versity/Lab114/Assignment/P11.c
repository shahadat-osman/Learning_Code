#include <stdio.h>
float average(int ary[], float n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ary[i];
    }

    float avg = sum / n;

    return avg;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    printf("Average = %f\n", average(ary, n));

    return 0;
}