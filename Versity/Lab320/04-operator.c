#include<stdio.h>
#include<string.h>
int main()
{
    char op[5];

    printf("Enter an Operator: ");
    fgets(op, sizeof(op), stdin);

    switch(op[0])
    {
        case '<':
            if(op[1]=='=')
                printf("This is Less than or equal Operator\n");
            else
                printf("This is Less than operator\n");
            break;
        
        case '>':
            if(op[1]=='=')
                printf("This is Greater than or equal Operator\n");
            else
                printf("This is Greater than operator\n");
            break;
        
        case '=':
            if(op[1]=='=')
                printf("This is Equal Operator\n");
            else
                printf("This is Assignment operator\n");
            break;
        case '!':
            if(op[1]=='=')
                printf("This is Logical Not Operator\n");
            else
                printf("This is Bitwise Not operator\n");
            break;

        case '&':
            if(op[1]=='&')
                printf("This is Logical And Operator\n");
            else
                printf("This is Bitwise And operator\n");
            break;

        case '|':
            if(op[1]=='|')
                printf("This is Logical Or Operator\n");
            else
                printf("This is Bitwise Or operator\n");
            break;
        
        case '+':
            printf("This is Addition Operator\n");
            break;

        case '-':
            printf("This is Substraction Operator\n");
            break;

        case '*':
            printf("This is Multiplication Operator\n");
            break;

        case '/':
            printf("This is Division Operator\n");
            break;

        case '%':
            printf("This is Modulas Operator\n");
            break;
        
        default :
            printf("Wrong Operator\n");
    }

    return 0;
}