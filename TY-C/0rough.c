#include<stdio.h>
int main()
{
    int i, j, choice;

    printf("Enter two numbers:\n");
    scanf("%d%d", &i, &j);

    printf("1.Multiple the numbers.\n2.Sum the numbers.\n");
    printf("Enter choice\n");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Answer is %d\n", i*j);
    }
    else if(choice==2)
    {
        printf("Answer is %d\n", i+j);
    }
    else
    {
        printf("Wrong choice.\n");
    }

    return 0;
}