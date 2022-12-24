#include <stdio.h>
int search(int ary[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (ary[i] == x)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    int n, x;
    scanf("%d", &n);
    int ary[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    printf("Element you want to search: ");
    scanf("%d", &x);

    int result = search(ary, n, x);
    if (result == 1)
        printf("Element Found\n");
    else if (result == 0)
        printf("Element not found\n");

    return 0;
}