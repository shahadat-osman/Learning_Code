#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int count=0, i;

    printf("Give Input: ");
    gets(string);

    if((string[0]>='a' && string[0]<='z') || (string[0]>='A' && string[0]<='Z') || (string[0]=='_') || (string[0]=='$'))
    {
        for(i=1; i<strlen(string); i++)
        {
            if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z') || (string[i]>='0' && string[i]<='9'))
                count++;
        }
    }

    if(count==strlen(string)-1)
        printf("This is identifier\n");
    else
        printf("This is not identifier\n");
        
    //printf("%d\n%d\n%c\n", strlen(string), count, string[1]);
}