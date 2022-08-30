#include<stdio.h>
int main()
{
    float num; 
    int choice;

    printf("Enter value:");
    scanf("%f", &num);

    printf("1. Feet to meter.\n2. Meter to feet.\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("Result: %f meters", num/3.28);
    }
    if(choice==2)
    {
        printf("Result: %f feets", num*3.28);
    }
    
    return 0;
}