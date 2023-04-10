#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int count=0, i;

    printf("Give Input: ");
    scanf("%s", string);

    if((string[0]>='a' && string[0]<='z') || (string[0]>='A' && string[0]<='Z') || (string[0]=='_') || (string[0]=='$'))
    {
        for(i=0; i<strlen(string); i++)
        {
            if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z') || (string[i]>='0' && string[i]<='9'))
                count++;
        }
    }

    if(count==strlen(string))
        printf("This is identifier\n");
    else
        printf("This is not identifier\n");
        
}