#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0, i;
    char string[10], keyword[32][10]={"double", "for", "else", "if", "auto", "int", "struct", "break", "long", "switch", "case", "enum",
                                     "register","typedef", "char", "extern", "return", "union", "continue", "signed", "void", "do", 
                                     "static", "while","default", "goto", "sizeof", "volatile", "const", "float", "short", "unsigned"};
    
    printf("Enter a Keyword: ");
    gets(string);
    //fgets(string, sizeof(string), stdin);

    for(i=0; i<32; i++)
    {
        if(strcmp(string, keyword[i])==0)
            flag=1;
    }
    if(flag==1)
        printf("This is a keyword\n");
    else
        printf("This is not keyword\n");

    return 0;
}