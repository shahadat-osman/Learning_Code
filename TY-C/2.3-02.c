#include<stdio.h>
int main()
{
    int answer;

    printf("What is 10 + 14?\n=");
    scanf("%d", &answer);

    if(answer==24)
    {
        printf("Right answer.");
    }
    else
    {
        printf("Sorry! Wrong answer.\nThe answer is 24.\n");
    }
    return 0;
}