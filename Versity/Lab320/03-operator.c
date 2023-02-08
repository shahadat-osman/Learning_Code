#include<stdio.h>
#include<string.h>
int main()
{
    char op[32][10]={"double", "for", "else", "if", "auto", "int", "struct", "break", "long", "switch", "case", "enum", "register", "typedef", "char", "extern", "return", "union", "continue", "signed", "void", "do", "static", "while", "default", "goto", "sizeof", "volatile", "const", "float", "short", "unsigned"};
    
    char string[10];
    int flag=0, i;

    printf("Enter an operator: ");
    gets(string);

    for(i=0; i<32; i++)
    {
        if(strcmp(string, op[i])==1)
            flag=1;
    }
    if(flag==1)
        printf("This is a keyword\n");
    else
        printf("This is not keyword\n");
    
}