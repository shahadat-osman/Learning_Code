#include<stdio.h>
int main()
{
    int num;

    printf("Enter a Number:");
    scanf("%d", &num);
    
    do
    {
        printf("Hello World..%d\n", num);
        num++;
    }
    while(num<=10);

    return 0;
}