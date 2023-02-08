#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int count=0, i;

    printf("Enter anything: ");
    gets(string);

    if(string[0]=='/' && (string[1]=='/' || (string[1]=='*' && string[strlen(string)-2]=='*' && string[strlen(string)-1]=='/')))
        printf("This is a comment\n");
        
    else
        printf("This is not comment\n");

}