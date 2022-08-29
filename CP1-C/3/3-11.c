#include<stdio.h>
int main()
{
    char L;

    printf("Input Letter: ");
    scanf("%c", &L);

    if (L>='a' && L<='z')
    {
        printf("%c is lower case\n\n", L);
    }
    else if (L>='A' && L<='Z')
    {
        printf("%c is upper case.\n\n",L);
    }
    else
    {
        printf("Wrong Input\n");
    }
    return 0;
}
