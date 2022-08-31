#include<stdio.h>
int main()
{
    int n1, n2, choice;

    printf("1.Add two numbers.\n2.Substracts two numbers.\n");
    printf("Enter Choice-");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Enter two numbers for sum:\n");
        scanf("%d %d", &n1, &n2);
        printf("Sum is: %d\n", n1+n2);
    }
    else if(choice==2)
    {
        printf("Enter two numbers for substract.");
        scanf("%d %d", &n1, &n2);
        printf("Substract is: %d\n", n1-n2);
    }
    else
    {
        printf("Wrong choice.");
    }
    return 0;
}