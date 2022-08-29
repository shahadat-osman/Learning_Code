#include<stdio.h>
int main()
{
    char L;

    printf("\nInput Letter: ");
    scanf("%c", &L);

    if (L>='a' && L<='z')
    {
        printf("%c is lower case\n\n", L);
    }
    if (L>='A' && L<='Z')
    {
        printf("%c is upper case.\n\n",L);
    }
    return 0;
}