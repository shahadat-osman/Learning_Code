#include<stdio.h>
int ifFunc();

    int num1, num2, choice;
    char try;
    
int main()
{   
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice from above-\nEx:(1/2/3/4)::\n");
    scanf("%d", &choice);
    if(choice<1 || choice>4)
    {
        printf("Wrong choice!\n");
        printf("Try again?(Y/N):\n");
        scanf(" %c", &try);

        if(try=='Y'|| try=='y')
            return main();
        else if(try=='N'|| try=='n')
            printf("Thank You\n");
    }
    else
    {
        ifFunc();

        scanf("%d\n%d", &num1, &num2);

        switch(choice)
        {
            case 1:
            printf("%d + %d = %d", num1, num2, num1+num2);
            break;

            case 2:
            printf("%d - %d = %d", num1, num2, num1-num2);
            break;
        
            case 3:
            printf("%d * %d = %d", num1, num2, num1*num2);
            break;

            case 4:
            if(num2==0)
            printf("Cannot Divide by zero\n");
            else
            printf("%d / %d = %d\n", num1, num2, num1/num2);
            printf("%d %% %d = %d\n", num1, num2, num1%num2);
            break;
        
            default:
            printf("Wrong choice!");
        }
    }
    return 0;
}
int ifFunc()
{
    if(choice==1)
    {
        printf("Enter two numbers for Additon:\n");
    }

    if(choice==2)
    {
        printf("Enter two numbers for Subtraction:\n");
    }
    if(choice==3)
    {
        printf("Enter two numbers for Multiplication:\n");
    }
    if(choice==4)
    {
        printf("Enter two numbers for Division:\n");
    }
    return 0;
}