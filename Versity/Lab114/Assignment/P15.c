#include <stdio.h>
int main()
{
    int n = 3, ary[n][n], i, j, element, count = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &ary[i][j]);
    }
    printf("Search Element: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (ary[i][j] == element)
                count++;
    }
    printf("Element Found %d times\n", count);

    return 0;
}