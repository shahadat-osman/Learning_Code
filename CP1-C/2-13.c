//getchar data type
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter the first letter of your name: \n");
    ch=getchar();

    printf("The first letter of your name is: %c\n", ch);
    
    return 0;
}
