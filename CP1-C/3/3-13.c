#include<stdio.h>
int main()
{
    char L;

    printf("Enter an alphabet: ");
    scanf("%c", &L);

    if(L=='a' || L=='e' || L=='i' || L=='o' || L=='u')
    {
        printf(" %c is vowel\n", L);
    }
    else
    {
        printf(" %c is consonant\n", L);
    }

    return 0;
}