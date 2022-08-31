#include<stdio.h>
int main()
{
    int count, answer;

    for(count=1; count<5; count++)
    {
        printf("what is %d + %d\n", count, count);
        scanf("%d", &answer);

        if(answer==count+count)
        {
            printf("Right!\n");
        }
        else
        {
            printf("Sorry! Wrong answer.\nThe answer is %d\n", count+count);
        }
    }
    return 0;


}